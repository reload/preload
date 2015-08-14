To better control the structure of the cssfiles we follow SMACSS principles.

So far example files are just added.



First and foremost it's important to keep your styles clean and tidy.
Standard code style guidelines apply.
https://www.drupal.org/coding-standards/css
Bear in mind though, that when writing comments in SCSS, you are allowed to use
line comments, and heavily encouraged to use them instead of block.
Block comments aren't necessarily removed from the compiled code, unless it's
specified in the build.

A very important thing to remember when writing SCSS styling is to not nest
to much. A good rule of thumb is to not nest more than 3 levels and be careful
when using @extend.
