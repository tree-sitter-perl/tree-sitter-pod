; A highlight file for nvim-treesitter to use

[(pod_command)
 (command)
 (cut_command)
 (begin_command)
 (end_command)
 (for_command)] @keyword

(command_paragraph
  (command) @keyword
  (#match? @keyword "^=head")
  (content) @text.title)

(command_paragraph
  (command) @keyword
  (#match? @keyword "^=over")
  (content) @number)

(command_paragraph
  (command) @keyword
  (#match? @keyword "^=item")
  (content) @text)

(command_paragraph
  (command) @keyword
  (#match? @keyword "^=encoding")
  (content) @string.special)

(command_paragraph
  (command) @keyword
  (#not-match? @keyword "^=(head|over|item|encoding)")
  (content) @string)

(verbatim_paragraph (content) @text.literal)

(begin_paragraph (format_name) @string.special)
(for_paragraph (format_name) @string.special)
(begin_paragraph (data) @text.literal)

(interior_sequence
  (sequence_letter) @character
  ["<" ">"] @punctuation.delimiter
)

(interior_sequence
  (sequence_letter) @character
  (#eq? @character "B")
  (content) @text.strong)

(interior_sequence
  (sequence_letter) @character
  (#eq? @character "C")
  (content) @text.literal)

(interior_sequence
  (sequence_letter) @character
  (#eq? @character "F")
  (content) @text.underline @string.special)

(interior_sequence
  (sequence_letter) @character
  (#eq? @character "I")
  (content) @text.emphasis)

(interior_sequence
  (sequence_letter) @character
  (#eq? @character "L")
  (content) @text.uri)

(interior_sequence
  (sequence_letter) @character
  (#eq? @character "X")
  (content) @text.reference)

(interior_sequence
  (sequence_letter) @character
  (#eq? @character "E")
  (content) @string.escape)
