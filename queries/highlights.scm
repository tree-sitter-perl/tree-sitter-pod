; A highlight file for nvim-treesitter to use

[(pod_directive)
 (head_directive)
 (over_directive)
 (item_directive)
 (back_directive)
 (encoding_directive)
 (cut_directive)] @keyword

(head_paragraph (content) @text.title)

(over_paragraph (content) @text.title)
(item_paragraph (content) @text.title)
(encoding_paragraph (content) @text.title)

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
