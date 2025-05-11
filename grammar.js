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
      $.subtask,
      $.blank_line,
      $.task,
    ),

    project: $ => seq(
      '=',
      field('project_name', $.project_name)
    ),
    project_name: _ => /[^\n]+/,

    task: $ => seq(
      field('priority', $.priority),
      field('description', $.description),
      repeat($.property)
    ),
    priority: _ => /!+/,
    description: _ => /[^@\n]+/,  // up to first @ or newline
    property: $ => seq(
      '@',
      field('name', $.property_name),
      '(',
      field('value', $.property_value),
      ')'
    ),
    property_name: $ => choice('due', 'deadline'),
    property_value: $ => choice($.property_value_date),
    property_value_date: $ => /\d{4}-\d{2}-\d{2}/,

    subtask: $ => seq(
      alias(/[ \t]+/, $.indent),
      '+',
      field('subtask_description', $.subtask_description),
      repeat($.property)
    ),
    subtask_description: _ => /[^\n]+/,
    
    blank_line: _ => /\n/,
  }
});
