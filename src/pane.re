[@bs.module]
external pane : ReasonReact.reactClass = "react-split-pane/lib/Pane.js";

open Types;

let make =
    (
      ~split: option(dir)=?,
      ~className: option(string)=?,
      ~initialSize: option(string)=?,
      ~minSize: option(string)=?,
      ~maxSize: option(string)=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=pane,
    ~props={
      "split": optionDirToJs(split),
      "className": Js.Nullable.fromOption(className),
      "initialSize": Js.Nullable.fromOption(initialSize),
      "minSize": Js.Nullable.fromOption(minSize),
      "maxSize": Js.Nullable.fromOption(maxSize),
    },
    children,
  );