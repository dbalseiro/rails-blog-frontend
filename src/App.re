[%bs.raw {|require('./App.css')|}];

let component = ReasonReact.statelessComponent("App");

let make = (~message, _children) => {
  ...component,
  render: _self =>
    <div className="container">
      <h1>(ReasonReact.string("Articles"))</h1>
      <Articles getArticles=FetchArticles.getArticles />
    </div>
};
