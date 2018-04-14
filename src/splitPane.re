[@bs.module] external splitPane : ReasonReact.reactClass = "react-split-pane";

open Types;

let make =
    (
      ~split: dir,
      ~className: option(string)=?,
      ~primary: option(second)=?,
      ~allowResize: option(bool)=?,
      ~defaultSize: option(int)=?,
      ~maxSize: option(int)=?,
      ~minSize: option(int)=?,
      ~size: option(int)=?,
      ~resizerSize: option(int)=?,
      ~step: option(int)=?,
      ~onDragFinished: option(unit => unit)=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=splitPane,
    ~props={
      "split": dirToJs(split),
      "className": Js.Nullable.fromOption(className),
      "primary": Js.Nullable.fromOption(optionSecondToJs(primary)),
      "allowResize": Js.Nullable.fromOption(allowResize),
      "defaultSize": Js.Nullable.fromOption(defaultSize),
      "maxSize": Js.Nullable.fromOption(maxSize),
      "minSize": Js.Nullable.fromOption(minSize),
      "size": Js.Nullable.fromOption(size),
      "resizerSize": Js.Nullable.fromOption(resizerSize),
      "step": Js.Nullable.fromOption(step),
      "onDragFinished": Js.Nullable.fromOption(onDragFinished),
    },
    children,
  );