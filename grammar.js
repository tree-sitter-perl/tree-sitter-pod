module.exports = grammar({
  name: 'pod',
  externals: $ => [
    $._eol,
    $._start_directive,
    $._start_plain,
    $._start_verbatim,
  ],
  rules: {
    pod: $ => repeat(choice(
      $.head_paragraph,
      $.plain_paragraph,
      $.verbatim_paragraph,

      $._blank_line
    )),

    _blank_line: $ => /\r?\n/,

    head_paragraph: $ => seq($._start_directive, $.head_directive, $.content, $._eol),
    head_directive: $ => choice('=head1', '=head2', '=head3', '=head4'),

    plain_paragraph: $ => seq($._start_plain, repeat(seq($.content, $._eol)), $._eol),

    verbatim_paragraph: $ => seq($._start_verbatim, repeat(seq($.content, $._eol)), $._eol),

    content: $ => /.+/,
  },
})
