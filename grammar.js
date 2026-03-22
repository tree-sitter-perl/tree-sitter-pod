module.exports = grammar({
  name: 'pod',
  externals: $ => [
    $._eol,
    $._start_command,
    $._start_plain,
    $._start_verbatim,
    $._content_plain,
    $._intseq_letter,
    $._intseq_start,
    $._intseq_end,
    $._data_section,
  ],
  rules: {
    pod: $ => repeat(choice(
      $.pod_paragraph,

      $.begin_paragraph,
      $.for_paragraph,
      $.command_paragraph,

      $.plain_paragraph,
      $.verbatim_paragraph,

      // We don't really stop at a `=cut` but it's handy for highlighting purposes
      $.cut_paragraph,

      $._blank_line
    )),

    _blank_line: $ => /\r?\n/,

    pod_paragraph: $ => seq($._start_command, $.pod_command, $._eol),
    pod_command: $ => '=pod',

    begin_paragraph: $ => seq(
      $._start_command, $.begin_command, /[ \t]+/, field('format', $.format_name), $._eol,
      alias($._data_section, $.data),
      $._start_command, $.end_command, /[ \t]+/, $.format_name, $._eol,
    ),
    begin_command: $ => '=begin',
    end_command: $ => '=end',

    for_paragraph: $ => seq(
      $._start_command, $.for_command, /[ \t]+/, field('format', $.format_name),
      optional(seq(/[ \t]+/, alias($._content_plain, $.content))),
      $._eol,
    ),
    for_command: $ => '=for',

    format_name: $ => /[a-zA-Z:]\S*/,

    // \s includes linefeed; tree-sitter doesn't seem to recognise \h for "horizontal whitespace
    command_paragraph: $ => seq($._start_command, field('command', $.command), /[ \t]*/, optional($.content), $._eol),
    command: $ => token(/=[a-zA-Z]\S*/),

    plain_paragraph: $ => seq($._start_plain, $.content, $._eol),

    verbatim_paragraph: $ => seq($._start_verbatim, alias($._content_plain, $.content), $._eol),

    cut_paragraph: $ => seq($._start_command, $.cut_command, $._eol),
    cut_command: $ => '=cut',

    content: $ => $._content,
    _content: $ => repeat1(choice($._content_plain, $.interior_sequence)),

    interior_sequence: $ => seq(
      field('letter', $.sequence_letter),
      alias($._intseq_start, '<'),
      optional($.content),
      alias($._intseq_end, '>'),
    ),
    sequence_letter: $ => $._intseq_letter,
  },
})
