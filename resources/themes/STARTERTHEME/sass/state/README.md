# State

> A state is something that augments and overrides all other styles. For example, an accordion section may be in a collapsed or expanded state. A message may be in a success or error state.


> There is plenty of similarity between a sub-module style and a state style. They both modify the existing look of an element. However, they differ in two key ways:

>1. State styles can apply to layout and/or module styles; and
2. State styles indicate a JavaScript dependency.

>It is this second point that is the most important distinction. Sub-module styles are applied to an element at render time and then are never changed again. State styles, however, are applied to elements to indicate a change in state while the page is still running on the client machine.

>For example, clicking on a tab will activate that tab. Therefore, an `.is-active` or `.is-tab-active` class is appropriate. Clicking on a dialog close button will hide the dialog. Therefore, an `.is-hidden` class is appropriate

[SMACSS.com](https://smacss.com/book/type-state)
