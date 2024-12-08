/**
 * @file Swarm engine json-like object syntax
 * @author trepz
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "swarm_object",

  extras: $ => [/\s/],

  rules: {
    source_file: $ => $.pair,

    val: $ => choice(
      $.object,
      $.array,
      $.string,
      $.number,
      $.true,
      $.false,
    ),

    object: $ => seq('{', $.pair, '}'),

    array: $ => seq('[', optional($.val_list), ']'),

    val_list: $ => seq($.val, repeat(seq(',', $.val))),

    pair: $ => choice($.key_val, $.type),

    key_val: $ => seq(
      choice($.string, $.key_string, $.prop),
      '=',
      $.val
    ),

    type: $ => seq('__type', '=', choice($.string, $.null)),

    key_string: $ => seq(/[a-zA-Z]/, repeat(/[a-zA-Z0-9_]/)),

    string: $ => seq(
      '"', 
      repeat(choice(
        /[^"\\]/, 
        /\\(["\\bfnrt])/
      )),
      '"'
    ),

    prop: $ => seq('__', $.key_string),

    number: $ => /-?(0|[1-9]\d*)(\.\d+)?([eE][+-]?\d+)?/,

    true: $ => 'True',

    false: $ => 'False',

    null: $ => '"null"'
  }
});
