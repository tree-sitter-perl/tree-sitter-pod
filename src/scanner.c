#include <tree_sitter/parser.h>

/* Set this to #define instead to enable debug printing */
#undef DEBUGGING

/* for debug */
#ifdef DEBUGGING
#  include <stdio.h>
#  define DEBUG(fmt,...)  fprintf(stderr, "scanner.c DEBUG: " fmt, __VA_ARGS__)
#else
#  define DEBUG(fmt,...)
#endif

#define ADVANCE \
  do {                                         \
    if(c == '\n')                              \
      DEBUG("> advance U+%04X = \\n\n",        \
          lexer->lookahead);                   \
    else                                       \
      DEBUG("> advance U+%04X = '%c'\n",       \
          lexer->lookahead, lexer->lookahead); \
    lexer->advance(lexer, false);              \
  } while(0)

#define TOKEN(type) \
  do {                            \
    DEBUG("token(%s)\n", #type);  \
    lexer->result_symbol = type;  \
    return true;                  \
  } while(0)

enum TokenType {
  TOKEN_EOL,
  TOKEN_START_DIRECTIVE,
  TOKEN_START_PLAIN,
  TOKEN_START_VERBATIM,
  TOKEN_CONTENT_PLAIN,
  TOKEN_INTSEQ_LETTER,
  TOKEN_INTSEQ_START,
  TOKEN_INTSEQ_END,
};

void *tree_sitter_pod_external_scanner_create() { return NULL; }

void tree_sitter_pod_external_scanner_destroy(void *payload) {}

void tree_sitter_pod_external_scanner_reset(void *payload) {}

unsigned int tree_sitter_pod_external_scanner_serialize(void *payload, char *buffer) { return 0; }

void tree_sitter_pod_external_scanner_deserialize(void *payload, const char *buffer, unsigned int n) {}

bool tree_sitter_pod_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  int c = lexer->lookahead;

  if(valid_symbols[TOKEN_EOL]) {
    /* Consumes a single \r?\n, also true at EOF */
    if(lexer->eof(lexer)) {
      TOKEN(TOKEN_EOL);
    }

    if(c == '\r') {
      DEBUG("> skip \\r\n", 0);
      lexer->advance(lexer, true);
      c = lexer->lookahead;
    }
    if(c == '\n') {
      DEBUG("> advance \\n\n", 0);
      lexer->advance(lexer, true);
      TOKEN(TOKEN_EOL);
    }
  }

  if(valid_symbols[TOKEN_START_DIRECTIVE] ||
     valid_symbols[TOKEN_START_PLAIN] ||
     valid_symbols[TOKEN_START_VERBATIM]) {
    if(lexer->eof(lexer))
      return false;

    uint32_t column = lexer->get_column(lexer);

    if(column > 0)
      return false;

    switch(c) {
      case 0: // EOF
        return false;

      case '=':
        TOKEN(TOKEN_START_DIRECTIVE);

      case '\n':
      case '\r':
        return false;

      case ' ':
      case '\t':
        TOKEN(TOKEN_START_VERBATIM);
    }

    TOKEN(TOKEN_START_PLAIN);
  }

  if(valid_symbols[TOKEN_INTSEQ_START]) {
    if(c == '<') {
      ADVANCE;
      TOKEN(TOKEN_INTSEQ_START);
    }
  }

  if(valid_symbols[TOKEN_CONTENT_PLAIN]) {
    /* We're looking for content plain, escape_start, maybe escape_end */
    bool want_end = valid_symbols[TOKEN_INTSEQ_END];
    bool got_plain = false;

    if(lexer->eof(lexer))
      return false;

    if(want_end && c == '>') {
      ADVANCE;
      TOKEN(TOKEN_INTSEQ_END);
    }

    if(c >= 'A' && c <= 'Z') {
      ADVANCE;
      c = lexer->lookahead;
      got_plain = true;

      if(c == '<') {
        TOKEN(TOKEN_INTSEQ_LETTER);
      }
    }

    bool at_linefeed = false;

    while(!lexer->eof(lexer)) {
      if(c == '\r') {
        ADVANCE;
        c = lexer->lookahead;
        continue;
      }

      if(c == '\n') {
        if(at_linefeed) {
          /* Seen double-linefeed; stop here without consuming it */
          if(!got_plain)
            /* No content yet so don't bother */
            return false;

          DEBUG("PLAIN ends on double-linefeed\n", 0);
          TOKEN(TOKEN_CONTENT_PLAIN);
        }

        at_linefeed = true;
        lexer->mark_end(lexer);
        ADVANCE;
        c = lexer->lookahead;
        continue;
      }
      if(c == '=' && at_linefeed) {
        /* Technically there should be a blank line before the next directive.
         * But so many people omit it. We'll allow this here */
        DEBUG("PLAIN ends at a single linefeed because next line begins '='\n", 0);
        TOKEN(TOKEN_CONTENT_PLAIN);
      }

      at_linefeed = false;

      if(c >= 'A' && c <= 'Z') {
        lexer->mark_end(lexer);
        ADVANCE;

        if(lexer->lookahead == '<') {
          TOKEN(TOKEN_CONTENT_PLAIN);
        }
      }
      else if(c == '>' && want_end) {
        break;
      }
      else {
        ADVANCE;
      }

      got_plain = true;

      c = lexer->lookahead;
    }

    DEBUG("End plain got=%d\n", got_plain);

    lexer->mark_end(lexer);
    TOKEN(TOKEN_CONTENT_PLAIN);
  }

  return false;
}
