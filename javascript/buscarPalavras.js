/* Escreva uma funcao que recebe como primeiro parametro um array de strings e como segundo parametro,
uma palavra. A funcao devera filtrar as palavras do array que contem nelas a string do primeiro parametro. */

function buscarPalavras(array, stringDesejada) {

  let palavrasFiltradas = array.filter(palavra => palavra.indexOf(stringDesejada) !== -1);

  return palavrasFiltradas;
}

let array = ["apple", "banana", "cherry", "date"];
let string = "an";

console.log(buscarPalavras(array, string));
