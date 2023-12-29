/* Desenvolva uma funcao que recebe como parametro um objeto e retorne um array de arrays, em que cada
elemento eh um array formado pelos pares chave/valor que corresponde a um atributo objeto. */

function objetoParaArray(objeto){
  const chaves = Object.keys(objeto);

  const array = chaves.map(chave => [chave, objeto[chave]]);

  return array;
}

const objeto = {
  nome: "Maria",
  idade: 40
};

console.log(objetoParaArray(objeto));