/**
 * @file Swarm engine json-like object syntax
 * @author trepz
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "swarm_object",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
