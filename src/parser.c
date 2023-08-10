#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 8
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  sym__blank_line = 1,
  sym_pod_directive = 2,
  anon_sym_EQhead1 = 3,
  anon_sym_EQhead2 = 4,
  anon_sym_EQhead3 = 5,
  anon_sym_EQhead4 = 6,
  anon_sym_EQhead5 = 7,
  anon_sym_EQhead6 = 8,
  sym_over_directive = 9,
  sym_item_directive = 10,
  sym_back_directive = 11,
  sym_encoding_directive = 12,
  sym_cut_directive = 13,
  sym__eol = 14,
  sym__start_directive = 15,
  sym__start_plain = 16,
  sym__start_verbatim = 17,
  sym__content_plain = 18,
  sym__intseq_letter = 19,
  sym__intseq_start = 20,
  sym__intseq_end = 21,
  sym_pod = 22,
  sym_pod_paragraph = 23,
  sym_head_paragraph = 24,
  sym_head_directive = 25,
  sym_over_paragraph = 26,
  sym_item_paragraph = 27,
  sym_back_paragraph = 28,
  sym_encoding_paragraph = 29,
  sym_plain_paragraph = 30,
  sym_verbatim_paragraph = 31,
  sym_cut_paragraph = 32,
  sym_content = 33,
  aux_sym__content = 34,
  sym_interior_sequence = 35,
  sym_sequence_letter = 36,
  aux_sym_pod_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__blank_line] = "_blank_line",
  [sym_pod_directive] = "pod_directive",
  [anon_sym_EQhead1] = "=head1",
  [anon_sym_EQhead2] = "=head2",
  [anon_sym_EQhead3] = "=head3",
  [anon_sym_EQhead4] = "=head4",
  [anon_sym_EQhead5] = "=head5",
  [anon_sym_EQhead6] = "=head6",
  [sym_over_directive] = "over_directive",
  [sym_item_directive] = "item_directive",
  [sym_back_directive] = "back_directive",
  [sym_encoding_directive] = "encoding_directive",
  [sym_cut_directive] = "cut_directive",
  [sym__eol] = "_eol",
  [sym__start_directive] = "_start_directive",
  [sym__start_plain] = "_start_plain",
  [sym__start_verbatim] = "_start_verbatim",
  [sym__content_plain] = "_content_plain",
  [sym__intseq_letter] = "_intseq_letter",
  [sym__intseq_start] = "_intseq_start",
  [sym__intseq_end] = "_intseq_end",
  [sym_pod] = "pod",
  [sym_pod_paragraph] = "pod_paragraph",
  [sym_head_paragraph] = "head_paragraph",
  [sym_head_directive] = "head_directive",
  [sym_over_paragraph] = "over_paragraph",
  [sym_item_paragraph] = "item_paragraph",
  [sym_back_paragraph] = "back_paragraph",
  [sym_encoding_paragraph] = "encoding_paragraph",
  [sym_plain_paragraph] = "plain_paragraph",
  [sym_verbatim_paragraph] = "verbatim_paragraph",
  [sym_cut_paragraph] = "cut_paragraph",
  [sym_content] = "content",
  [aux_sym__content] = "_content",
  [sym_interior_sequence] = "interior_sequence",
  [sym_sequence_letter] = "sequence_letter",
  [aux_sym_pod_repeat1] = "pod_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__blank_line] = sym__blank_line,
  [sym_pod_directive] = sym_pod_directive,
  [anon_sym_EQhead1] = anon_sym_EQhead1,
  [anon_sym_EQhead2] = anon_sym_EQhead2,
  [anon_sym_EQhead3] = anon_sym_EQhead3,
  [anon_sym_EQhead4] = anon_sym_EQhead4,
  [anon_sym_EQhead5] = anon_sym_EQhead5,
  [anon_sym_EQhead6] = anon_sym_EQhead6,
  [sym_over_directive] = sym_over_directive,
  [sym_item_directive] = sym_item_directive,
  [sym_back_directive] = sym_back_directive,
  [sym_encoding_directive] = sym_encoding_directive,
  [sym_cut_directive] = sym_cut_directive,
  [sym__eol] = sym__eol,
  [sym__start_directive] = sym__start_directive,
  [sym__start_plain] = sym__start_plain,
  [sym__start_verbatim] = sym__start_verbatim,
  [sym__content_plain] = sym__content_plain,
  [sym__intseq_letter] = sym__intseq_letter,
  [sym__intseq_start] = sym__intseq_start,
  [sym__intseq_end] = sym__intseq_end,
  [sym_pod] = sym_pod,
  [sym_pod_paragraph] = sym_pod_paragraph,
  [sym_head_paragraph] = sym_head_paragraph,
  [sym_head_directive] = sym_head_directive,
  [sym_over_paragraph] = sym_over_paragraph,
  [sym_item_paragraph] = sym_item_paragraph,
  [sym_back_paragraph] = sym_back_paragraph,
  [sym_encoding_paragraph] = sym_encoding_paragraph,
  [sym_plain_paragraph] = sym_plain_paragraph,
  [sym_verbatim_paragraph] = sym_verbatim_paragraph,
  [sym_cut_paragraph] = sym_cut_paragraph,
  [sym_content] = sym_content,
  [aux_sym__content] = aux_sym__content,
  [sym_interior_sequence] = sym_interior_sequence,
  [sym_sequence_letter] = sym_sequence_letter,
  [aux_sym_pod_repeat1] = aux_sym_pod_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__blank_line] = {
    .visible = false,
    .named = true,
  },
  [sym_pod_directive] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQhead1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQhead2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQhead3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQhead4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQhead5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQhead6] = {
    .visible = true,
    .named = false,
  },
  [sym_over_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_item_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_back_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_encoding_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_cut_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [sym__start_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__start_plain] = {
    .visible = false,
    .named = true,
  },
  [sym__start_verbatim] = {
    .visible = false,
    .named = true,
  },
  [sym__content_plain] = {
    .visible = false,
    .named = true,
  },
  [sym__intseq_letter] = {
    .visible = false,
    .named = true,
  },
  [sym__intseq_start] = {
    .visible = false,
    .named = true,
  },
  [sym__intseq_end] = {
    .visible = false,
    .named = true,
  },
  [sym_pod] = {
    .visible = true,
    .named = true,
  },
  [sym_pod_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym_head_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym_head_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_over_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym_item_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym_back_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym_encoding_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym_plain_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym_verbatim_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym_cut_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__content] = {
    .visible = false,
    .named = false,
  },
  [sym_interior_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_letter] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_pod_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_letter = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_letter] = "letter",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_letter, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = sym_content,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 9,
  [14] = 14,
  [15] = 7,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 25,
  [28] = 26,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 37,
  [45] = 38,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '1') ADVANCE(31);
      if (lookahead == '2') ADVANCE(32);
      if (lookahead == '3') ADVANCE(33);
      if (lookahead == '4') ADVANCE(34);
      if (lookahead == '5') ADVANCE(35);
      if (lookahead == '6') ADVANCE(36);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == 'b') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(19);
      if (lookahead == 'h') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(26);
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(2);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 14:
      if (lookahead == 'g') ADVANCE(40);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'k') ADVANCE(39);
      END_STATE();
    case 17:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 'v') ADVANCE(12);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__blank_line);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_pod_directive);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQhead1);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_EQhead2);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_EQhead3);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_EQhead4);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_EQhead5);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_EQhead6);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_over_directive);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_item_directive);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_back_directive);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_encoding_directive);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_cut_directive);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 27, .external_lex_state = 2},
  [2] = {.lex_state = 27, .external_lex_state = 2},
  [3] = {.lex_state = 27, .external_lex_state = 2},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0, .external_lex_state = 3},
  [6] = {.lex_state = 0, .external_lex_state = 3},
  [7] = {.lex_state = 0, .external_lex_state = 4},
  [8] = {.lex_state = 0, .external_lex_state = 5},
  [9] = {.lex_state = 0, .external_lex_state = 4},
  [10] = {.lex_state = 0, .external_lex_state = 5},
  [11] = {.lex_state = 0, .external_lex_state = 5},
  [12] = {.lex_state = 0, .external_lex_state = 5},
  [13] = {.lex_state = 0, .external_lex_state = 3},
  [14] = {.lex_state = 0, .external_lex_state = 5},
  [15] = {.lex_state = 0, .external_lex_state = 3},
  [16] = {.lex_state = 27, .external_lex_state = 2},
  [17] = {.lex_state = 27, .external_lex_state = 2},
  [18] = {.lex_state = 27, .external_lex_state = 2},
  [19] = {.lex_state = 27, .external_lex_state = 2},
  [20] = {.lex_state = 27, .external_lex_state = 2},
  [21] = {.lex_state = 27, .external_lex_state = 2},
  [22] = {.lex_state = 27, .external_lex_state = 2},
  [23] = {.lex_state = 27, .external_lex_state = 2},
  [24] = {.lex_state = 27, .external_lex_state = 2},
  [25] = {.lex_state = 0, .external_lex_state = 3},
  [26] = {.lex_state = 0, .external_lex_state = 4},
  [27] = {.lex_state = 0, .external_lex_state = 4},
  [28] = {.lex_state = 0, .external_lex_state = 3},
  [29] = {.lex_state = 0, .external_lex_state = 5},
  [30] = {.lex_state = 0, .external_lex_state = 6},
  [31] = {.lex_state = 0, .external_lex_state = 6},
  [32] = {.lex_state = 0, .external_lex_state = 6},
  [33] = {.lex_state = 0, .external_lex_state = 7},
  [34] = {.lex_state = 0, .external_lex_state = 6},
  [35] = {.lex_state = 0, .external_lex_state = 6},
  [36] = {.lex_state = 0, .external_lex_state = 6},
  [37] = {.lex_state = 0, .external_lex_state = 8},
  [38] = {.lex_state = 0, .external_lex_state = 9},
  [39] = {.lex_state = 0, .external_lex_state = 6},
  [40] = {.lex_state = 0, .external_lex_state = 9},
  [41] = {.lex_state = 0, .external_lex_state = 6},
  [42] = {.lex_state = 0, .external_lex_state = 6},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0, .external_lex_state = 8},
  [45] = {.lex_state = 0, .external_lex_state = 9},
};

enum {
  ts_external_token__eol = 0,
  ts_external_token__start_directive = 1,
  ts_external_token__start_plain = 2,
  ts_external_token__start_verbatim = 3,
  ts_external_token__content_plain = 4,
  ts_external_token__intseq_letter = 5,
  ts_external_token__intseq_start = 6,
  ts_external_token__intseq_end = 7,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__eol] = sym__eol,
  [ts_external_token__start_directive] = sym__start_directive,
  [ts_external_token__start_plain] = sym__start_plain,
  [ts_external_token__start_verbatim] = sym__start_verbatim,
  [ts_external_token__content_plain] = sym__content_plain,
  [ts_external_token__intseq_letter] = sym__intseq_letter,
  [ts_external_token__intseq_start] = sym__intseq_start,
  [ts_external_token__intseq_end] = sym__intseq_end,
};

static const bool ts_external_scanner_states[10][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__eol] = true,
    [ts_external_token__start_directive] = true,
    [ts_external_token__start_plain] = true,
    [ts_external_token__start_verbatim] = true,
    [ts_external_token__content_plain] = true,
    [ts_external_token__intseq_letter] = true,
    [ts_external_token__intseq_start] = true,
    [ts_external_token__intseq_end] = true,
  },
  [2] = {
    [ts_external_token__start_directive] = true,
    [ts_external_token__start_plain] = true,
    [ts_external_token__start_verbatim] = true,
  },
  [3] = {
    [ts_external_token__content_plain] = true,
    [ts_external_token__intseq_letter] = true,
    [ts_external_token__intseq_end] = true,
  },
  [4] = {
    [ts_external_token__eol] = true,
    [ts_external_token__content_plain] = true,
    [ts_external_token__intseq_letter] = true,
  },
  [5] = {
    [ts_external_token__content_plain] = true,
    [ts_external_token__intseq_letter] = true,
  },
  [6] = {
    [ts_external_token__eol] = true,
  },
  [7] = {
    [ts_external_token__content_plain] = true,
  },
  [8] = {
    [ts_external_token__intseq_end] = true,
  },
  [9] = {
    [ts_external_token__intseq_start] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_pod_directive] = ACTIONS(1),
    [anon_sym_EQhead1] = ACTIONS(1),
    [anon_sym_EQhead2] = ACTIONS(1),
    [anon_sym_EQhead3] = ACTIONS(1),
    [anon_sym_EQhead4] = ACTIONS(1),
    [anon_sym_EQhead5] = ACTIONS(1),
    [anon_sym_EQhead6] = ACTIONS(1),
    [sym_over_directive] = ACTIONS(1),
    [sym_item_directive] = ACTIONS(1),
    [sym_back_directive] = ACTIONS(1),
    [sym_encoding_directive] = ACTIONS(1),
    [sym_cut_directive] = ACTIONS(1),
    [sym__eol] = ACTIONS(1),
    [sym__start_directive] = ACTIONS(1),
    [sym__start_plain] = ACTIONS(1),
    [sym__start_verbatim] = ACTIONS(1),
    [sym__content_plain] = ACTIONS(1),
    [sym__intseq_letter] = ACTIONS(1),
    [sym__intseq_start] = ACTIONS(1),
    [sym__intseq_end] = ACTIONS(1),
  },
  [1] = {
    [sym_pod] = STATE(43),
    [sym_pod_paragraph] = STATE(2),
    [sym_head_paragraph] = STATE(2),
    [sym_over_paragraph] = STATE(2),
    [sym_item_paragraph] = STATE(2),
    [sym_back_paragraph] = STATE(2),
    [sym_encoding_paragraph] = STATE(2),
    [sym_plain_paragraph] = STATE(2),
    [sym_verbatim_paragraph] = STATE(2),
    [sym_cut_paragraph] = STATE(2),
    [aux_sym_pod_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(5),
    [sym__start_directive] = ACTIONS(7),
    [sym__start_plain] = ACTIONS(9),
    [sym__start_verbatim] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      sym__start_directive,
    ACTIONS(9), 1,
      sym__start_plain,
    ACTIONS(11), 1,
      sym__start_verbatim,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym__blank_line,
    STATE(3), 10,
      sym_pod_paragraph,
      sym_head_paragraph,
      sym_over_paragraph,
      sym_item_paragraph,
      sym_back_paragraph,
      sym_encoding_paragraph,
      sym_plain_paragraph,
      sym_verbatim_paragraph,
      sym_cut_paragraph,
      aux_sym_pod_repeat1,
  [28] = 6,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym__blank_line,
    ACTIONS(22), 1,
      sym__start_directive,
    ACTIONS(25), 1,
      sym__start_plain,
    ACTIONS(28), 1,
      sym__start_verbatim,
    STATE(3), 10,
      sym_pod_paragraph,
      sym_head_paragraph,
      sym_over_paragraph,
      sym_item_paragraph,
      sym_back_paragraph,
      sym_encoding_paragraph,
      sym_plain_paragraph,
      sym_verbatim_paragraph,
      sym_cut_paragraph,
      aux_sym_pod_repeat1,
  [56] = 8,
    ACTIONS(31), 1,
      sym_pod_directive,
    ACTIONS(35), 1,
      sym_over_directive,
    ACTIONS(37), 1,
      sym_item_directive,
    ACTIONS(39), 1,
      sym_back_directive,
    ACTIONS(41), 1,
      sym_encoding_directive,
    ACTIONS(43), 1,
      sym_cut_directive,
    STATE(14), 1,
      sym_head_directive,
    ACTIONS(33), 6,
      anon_sym_EQhead1,
      anon_sym_EQhead2,
      anon_sym_EQhead3,
      anon_sym_EQhead4,
      anon_sym_EQhead5,
      anon_sym_EQhead6,
  [86] = 6,
    ACTIONS(45), 1,
      sym__content_plain,
    ACTIONS(47), 1,
      sym__intseq_letter,
    ACTIONS(49), 1,
      sym__intseq_end,
    STATE(44), 1,
      sym_content,
    STATE(45), 1,
      sym_sequence_letter,
    STATE(15), 2,
      aux_sym__content,
      sym_interior_sequence,
  [106] = 6,
    ACTIONS(45), 1,
      sym__content_plain,
    ACTIONS(47), 1,
      sym__intseq_letter,
    ACTIONS(51), 1,
      sym__intseq_end,
    STATE(37), 1,
      sym_content,
    STATE(45), 1,
      sym_sequence_letter,
    STATE(15), 2,
      aux_sym__content,
      sym_interior_sequence,
  [126] = 5,
    ACTIONS(47), 1,
      sym__intseq_letter,
    ACTIONS(53), 1,
      sym__eol,
    ACTIONS(55), 1,
      sym__content_plain,
    STATE(38), 1,
      sym_sequence_letter,
    STATE(9), 2,
      aux_sym__content,
      sym_interior_sequence,
  [143] = 5,
    ACTIONS(47), 1,
      sym__intseq_letter,
    ACTIONS(57), 1,
      sym__content_plain,
    STATE(38), 1,
      sym_sequence_letter,
    STATE(39), 1,
      sym_content,
    STATE(7), 2,
      aux_sym__content,
      sym_interior_sequence,
  [160] = 5,
    ACTIONS(59), 1,
      sym__eol,
    ACTIONS(61), 1,
      sym__content_plain,
    ACTIONS(64), 1,
      sym__intseq_letter,
    STATE(38), 1,
      sym_sequence_letter,
    STATE(9), 2,
      aux_sym__content,
      sym_interior_sequence,
  [177] = 5,
    ACTIONS(47), 1,
      sym__intseq_letter,
    ACTIONS(57), 1,
      sym__content_plain,
    STATE(35), 1,
      sym_content,
    STATE(38), 1,
      sym_sequence_letter,
    STATE(7), 2,
      aux_sym__content,
      sym_interior_sequence,
  [194] = 5,
    ACTIONS(47), 1,
      sym__intseq_letter,
    ACTIONS(57), 1,
      sym__content_plain,
    STATE(34), 1,
      sym_content,
    STATE(38), 1,
      sym_sequence_letter,
    STATE(7), 2,
      aux_sym__content,
      sym_interior_sequence,
  [211] = 5,
    ACTIONS(47), 1,
      sym__intseq_letter,
    ACTIONS(57), 1,
      sym__content_plain,
    STATE(32), 1,
      sym_content,
    STATE(38), 1,
      sym_sequence_letter,
    STATE(7), 2,
      aux_sym__content,
      sym_interior_sequence,
  [228] = 5,
    ACTIONS(59), 1,
      sym__intseq_end,
    ACTIONS(64), 1,
      sym__intseq_letter,
    ACTIONS(67), 1,
      sym__content_plain,
    STATE(45), 1,
      sym_sequence_letter,
    STATE(13), 2,
      aux_sym__content,
      sym_interior_sequence,
  [245] = 5,
    ACTIONS(47), 1,
      sym__intseq_letter,
    ACTIONS(57), 1,
      sym__content_plain,
    STATE(31), 1,
      sym_content,
    STATE(38), 1,
      sym_sequence_letter,
    STATE(7), 2,
      aux_sym__content,
      sym_interior_sequence,
  [262] = 5,
    ACTIONS(47), 1,
      sym__intseq_letter,
    ACTIONS(53), 1,
      sym__intseq_end,
    ACTIONS(70), 1,
      sym__content_plain,
    STATE(45), 1,
      sym_sequence_letter,
    STATE(13), 2,
      aux_sym__content,
      sym_interior_sequence,
  [279] = 1,
    ACTIONS(72), 5,
      sym__start_directive,
      sym__start_plain,
      sym__start_verbatim,
      ts_builtin_sym_end,
      sym__blank_line,
  [287] = 1,
    ACTIONS(74), 5,
      sym__start_directive,
      sym__start_plain,
      sym__start_verbatim,
      ts_builtin_sym_end,
      sym__blank_line,
  [295] = 1,
    ACTIONS(76), 5,
      sym__start_directive,
      sym__start_plain,
      sym__start_verbatim,
      ts_builtin_sym_end,
      sym__blank_line,
  [303] = 1,
    ACTIONS(78), 5,
      sym__start_directive,
      sym__start_plain,
      sym__start_verbatim,
      ts_builtin_sym_end,
      sym__blank_line,
  [311] = 1,
    ACTIONS(80), 5,
      sym__start_directive,
      sym__start_plain,
      sym__start_verbatim,
      ts_builtin_sym_end,
      sym__blank_line,
  [319] = 1,
    ACTIONS(82), 5,
      sym__start_directive,
      sym__start_plain,
      sym__start_verbatim,
      ts_builtin_sym_end,
      sym__blank_line,
  [327] = 1,
    ACTIONS(84), 5,
      sym__start_directive,
      sym__start_plain,
      sym__start_verbatim,
      ts_builtin_sym_end,
      sym__blank_line,
  [335] = 1,
    ACTIONS(86), 5,
      sym__start_directive,
      sym__start_plain,
      sym__start_verbatim,
      ts_builtin_sym_end,
      sym__blank_line,
  [343] = 1,
    ACTIONS(88), 5,
      sym__start_directive,
      sym__start_plain,
      sym__start_verbatim,
      ts_builtin_sym_end,
      sym__blank_line,
  [351] = 1,
    ACTIONS(90), 3,
      sym__content_plain,
      sym__intseq_letter,
      sym__intseq_end,
  [357] = 1,
    ACTIONS(92), 3,
      sym__eol,
      sym__content_plain,
      sym__intseq_letter,
  [363] = 1,
    ACTIONS(90), 3,
      sym__eol,
      sym__content_plain,
      sym__intseq_letter,
  [369] = 1,
    ACTIONS(92), 3,
      sym__content_plain,
      sym__intseq_letter,
      sym__intseq_end,
  [375] = 1,
    ACTIONS(94), 2,
      sym__content_plain,
      sym__intseq_letter,
  [380] = 1,
    ACTIONS(96), 1,
      sym__eol,
  [384] = 1,
    ACTIONS(98), 1,
      sym__eol,
  [388] = 1,
    ACTIONS(100), 1,
      sym__eol,
  [392] = 1,
    ACTIONS(102), 1,
      sym__content_plain,
  [396] = 1,
    ACTIONS(104), 1,
      sym__eol,
  [400] = 1,
    ACTIONS(106), 1,
      sym__eol,
  [404] = 1,
    ACTIONS(108), 1,
      sym__eol,
  [408] = 1,
    ACTIONS(110), 1,
      sym__intseq_end,
  [412] = 1,
    ACTIONS(112), 1,
      sym__intseq_start,
  [416] = 1,
    ACTIONS(114), 1,
      sym__eol,
  [420] = 1,
    ACTIONS(116), 1,
      sym__intseq_start,
  [424] = 1,
    ACTIONS(118), 1,
      sym__eol,
  [428] = 1,
    ACTIONS(120), 1,
      sym__eol,
  [432] = 1,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
  [436] = 1,
    ACTIONS(124), 1,
      sym__intseq_end,
  [440] = 1,
    ACTIONS(126), 1,
      sym__intseq_start,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 86,
  [SMALL_STATE(6)] = 106,
  [SMALL_STATE(7)] = 126,
  [SMALL_STATE(8)] = 143,
  [SMALL_STATE(9)] = 160,
  [SMALL_STATE(10)] = 177,
  [SMALL_STATE(11)] = 194,
  [SMALL_STATE(12)] = 211,
  [SMALL_STATE(13)] = 228,
  [SMALL_STATE(14)] = 245,
  [SMALL_STATE(15)] = 262,
  [SMALL_STATE(16)] = 279,
  [SMALL_STATE(17)] = 287,
  [SMALL_STATE(18)] = 295,
  [SMALL_STATE(19)] = 303,
  [SMALL_STATE(20)] = 311,
  [SMALL_STATE(21)] = 319,
  [SMALL_STATE(22)] = 327,
  [SMALL_STATE(23)] = 335,
  [SMALL_STATE(24)] = 343,
  [SMALL_STATE(25)] = 351,
  [SMALL_STATE(26)] = 357,
  [SMALL_STATE(27)] = 363,
  [SMALL_STATE(28)] = 369,
  [SMALL_STATE(29)] = 375,
  [SMALL_STATE(30)] = 380,
  [SMALL_STATE(31)] = 384,
  [SMALL_STATE(32)] = 388,
  [SMALL_STATE(33)] = 392,
  [SMALL_STATE(34)] = 396,
  [SMALL_STATE(35)] = 400,
  [SMALL_STATE(36)] = 404,
  [SMALL_STATE(37)] = 408,
  [SMALL_STATE(38)] = 412,
  [SMALL_STATE(39)] = 416,
  [SMALL_STATE(40)] = 420,
  [SMALL_STATE(41)] = 424,
  [SMALL_STATE(42)] = 428,
  [SMALL_STATE(43)] = 432,
  [SMALL_STATE(44)] = 436,
  [SMALL_STATE(45)] = 440,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pod, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pod, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pod_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pod_repeat1, 2), SHIFT_REPEAT(3),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pod_repeat1, 2), SHIFT_REPEAT(4),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pod_repeat1, 2), SHIFT_REPEAT(8),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pod_repeat1, 2), SHIFT_REPEAT(33),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content, 2), SHIFT_REPEAT(9),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content, 2), SHIFT_REPEAT(40),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content, 2), SHIFT_REPEAT(13),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pod_paragraph, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_head_paragraph, 4),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_paragraph, 4),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_encoding_paragraph, 4),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_paragraph, 4),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_back_paragraph, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cut_paragraph, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_paragraph, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_paragraph, 3, .production_id = 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interior_sequence, 4, .production_id = 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interior_sequence, 3, .production_id = 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_head_directive, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_letter, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [122] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_pod_external_scanner_create(void);
void tree_sitter_pod_external_scanner_destroy(void *);
bool tree_sitter_pod_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_pod_external_scanner_serialize(void *, char *);
void tree_sitter_pod_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_pod(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_pod_external_scanner_create,
      tree_sitter_pod_external_scanner_destroy,
      tree_sitter_pod_external_scanner_scan,
      tree_sitter_pod_external_scanner_serialize,
      tree_sitter_pod_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
