# Base

*The base directory should only contain styling of base rules and/or resets.*

* **Base rule** is applied to an element using an element selector, a descendent
selector, or a child selector, along with any pseudo-classes. It doesn’t
include any class or ID selectors. It is defining the default styling for how
that element should look in all occurrences on the page.

```
// Example:
a { text-decoration: none; }
strong { font-weight: 900; }
```

* **CSS Reset** is a set of Base styles designed to strip out—or reset—the default margin, padding, and other properties. Its purpose is to define a consistent foundation across browsers to build the site on.

```
// Example:
body, div, ul, ol, li {
  margin: 0;
  padding: 0;
}
```

[SMACSS.com](https://smacss.com/book/type-base)
