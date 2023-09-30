; A highlight file for nvim-treesitter to use

[(pod_command)
 (command)
 (cut_command)] @keyword

(command_paragraph
  (command) @keyword
  (#match? @keyword "^=head")
  (content) @text.title)

(command_paragraph
  (command) @keyword
  (#not-match? @keyword "^=head")
  (content) @string)

(verbatim_paragraph (content) @text.literal)

(interior_sequence
  (sequence_letter) @character
  "<" @punctuation.delimiter
  ">" @punctuation.delimiter
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
  (#eq? @character "U")
  (content) @text.underline)
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
