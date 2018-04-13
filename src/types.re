/* For maximum code factorization (and unreadability) the following lines make use of *partial function application* */
let makeJsOptionMap = (f, b) => Js.Option.map((. a) => f(a), b);

[@bs.deriving jsConverter]
type second = [ | `second];

let optionSecondToJs = makeJsOptionMap(secondToJs);

[@bs.deriving jsConverter]
type dir = [ | `vertical | `horizontal];

let optionDirToJs = makeJsOptionMap(dirToJs);