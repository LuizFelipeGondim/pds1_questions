/* Voce esta trabalhando numa aplicacao pessoal de controle de despesas. Na tela principal dessa aplicacao, eh
possivel adicionar produtos ou servicos, informando nome, categoria e preco. Uma funcionalidade que voce 
esta desenvolvendo no momento eh a de somar o total de despesas. Crie uma funcao que receba um array de produtos 
e retorne o total de despesas. */

function despesasTotais(produtos){
  let despesas = 0;

  for(let i = 0; i < produtos.length; i++){
    despesas += produtos[i].preco;
  }

  return despesas.toFixed(2);
}


const produtos = [
  {nome: "Jornal Online", categoria: "Informacao", preco: 89.99},
  {nome: "Cinema", categoria: "Entretenimento", preco: 150}
];

console.log(despesasTotais(produtos));