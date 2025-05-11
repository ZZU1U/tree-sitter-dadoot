;; Projects
(project
  (name) @function)

;; Top-level tasks
(task
  (priority) @constant
  (description) @string)

;; Subtasks
(subtask
  (indent) @punctuation.special
  (description) @string)

;; Properties (shared between task/subtask)
(property
  (name) @attribute
  (value) @number)

;; Optional: blank lines
(blank_line) @comment

