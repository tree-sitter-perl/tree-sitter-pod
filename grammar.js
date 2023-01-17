module.exports = grammar({
  name: 'pod',
  rules: {
    pod: $ => repeat(choice(
      $.head_paragraph,
    )),

    head_paragraph: $ => seq($.head_directive, $.content),
    head_directive: $ => choice('=head1', '=head2', '=head3', '=head4'),

    content: $ => /.+/,
  },
})
