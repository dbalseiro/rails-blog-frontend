module Article = {
  let component = ReasonReact.statelessComponent("Article");

  let make = (_children, ~article: Types.article) => {
    ...component,
    render: _self =>
      <li>
        <span>(ReasonReact.string(article.title))</span>
        <div>(ReasonReact.string(article.body))</div>
      </li>
  };
};

let component = ReasonReact.statelessComponent("Article");

let make = (_children, ~getArticles) => {
  ...component,
  render: _self =>
    <ul>(
      getArticles()
      |> Array.map(article => <Article article />)
      |> ReasonReact.array
    )</ul>
};
