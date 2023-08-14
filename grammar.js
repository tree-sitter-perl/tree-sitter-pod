module.exports = grammar({
  name: 'pod',
  externals: $ => [
    $._eol,
    $._start_directive,
    $._start_plain,
    $._start_verbatim,
    $._content_plain,
    $._intseq_letter,
    $._intseq_start,
    $._intseq_end,
  ],
  rules: {
    pod: $ => repeat(choice(
      $.pod_paragraph,

      $.head_paragraph,
      $.over_paragraph,
      $.item_paragraph,
      $.back_paragraph,
      $.encoding_paragraph,

      $.plain_paragraph,
      $.verbatim_paragraph,

      // We don't really stop at a `=cut` but it's handy for highlighting purposes
      $.cut_paragraph,

      $._blank_line
    )),

    _blank_line: $ => /\r?\n/,

    pod_paragraph: $ => seq($._start_directive, $.pod_directive, $._eol),
    pod_directive: $ => '=pod',

    head_paragraph: $ => seq($._start_directive, $.head_directive, /\s*/, $.content, $._eol),
    head_directive: $ => choice('=head1', '=head2', '=head3', '=head4', '=head5', '=head6'),

    over_paragraph: $ => seq($._start_directive, $.over_directive, /\s*/, $.content, $._eol),
    over_directive: $ => '=over',

    item_paragraph: $ => seq($._start_directive, $.item_directive, /\s*/, $.content, $._eol),
    item_directive: $ => '=item',

    back_paragraph: $ => seq($._start_directive, $.back_directive, $._eol),
    back_directive: $ => '=back',

    encoding_paragraph: $ => seq($._start_directive, $.encoding_directive, /\s*/, $.content, $._eol),
    encoding_directive: $ => '=encoding',

    plain_paragraph: $ => seq($._start_plain, $.content, $._eol),

    verbatim_paragraph: $ => seq($._start_verbatim, alias($._content_plain, $.content), $._eol),

    cut_paragraph: $ => seq($._start_directive, $.cut_directive, $._eol),
    cut_directive: $ => '=cut',

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
