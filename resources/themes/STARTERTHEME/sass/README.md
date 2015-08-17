To better control the structure of the cssfiles we follow SMACSS principles.

First and foremost it's important to keep your styles clean and tidy.
Standard code style guidelines apply.
https://www.drupal.org/coding-standards/css
Bear in mind though, that when writing comments in Sass, you are allowed to use
line comments, and heavily encouraged to use them instead of block.
Block comments aren't necessarily removed from the compiled code, unless it's
specified in the build.

Sass was originally using a Ruby like syntax with indentation instead of
braces. It's discouraged to use this syntax however you might find old
projects that still uses this.

A very important thing to remember when writing Sass styling is to not nest
to much. A good rule of thumb is to not nest more than 3 levels and be careful
when using @extend.

