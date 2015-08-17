The most important thing with BASE is to look at it as a more specific
sitebased reset. All the html tags are either reset or normalized in a reset
css, which is included in BASE, but if you know that all headings should be
Georgia and blue then it goes in base.

h1, h2, h3, h4, h5 {
  font-family: Georgia, sans-serif;
  color: blue;
}

Because of this, base is also the first that's included. If you then need h3 to
be the odd one out and slightly lighter blue, then it should go in THEME which
is included much later.

