/**
 * @file DuDu
 * @author zzu1u <gl.anohin@yandex.ru>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "dadoot",

  rules: {
    source_file: $ => repeat($._block),

    _block: $ => choice(
      $.project,
      $.task,
      $.blank_line,
    ),

    project: $ => seq(
      '=',
      field('project_name', /[^\n]+/),
    ),

    task: $ => seq(
      field('priority', $.priority),
      ' ',
      field('description', $.line_content),
      ' ',
      repeat($.property),
      '\n',
      repeat($.additional_description),
      repeat($.subtask)
    ),

    priority: _ => /!{1,3}/,
    description: _ => /[^@\n]+/,  // up to first @ or newline
    additional_description: $ => seq(
      $.tab_indent,
      $.line_content,
      '\n'
    ),

    property: $ => seq(
      '@',
      field('name', $.property_name),
      '(',
      field('value', $.property_value),
      ')'
    ),
    property_name: $ => choice('due', 'deadline', 'every'),
    property_value: _ => /[^\)\n]+/,

    subtask: $ => seq(
      field('indent', $.tab_indent),
      '+',
      ' ',
      field('subtask_description', $.line_content),
      ' ',
      repeat($.property),
      //repeat($.additional_description),
    ),
    
    line_content: _ => /[^@\n+][^\n]*/,
    blank_line: _ => /\n/,
    tab_indent: _ => /[ \t]+/,
  }
});
