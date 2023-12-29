/* Elabore uma funcao que receba um array de numeros e retorne um array que tenha todos os numeros que sao
pares e que tambem tenham indices pares. */

function indiceEValorPares(array){
  const pares = array.filter((elemento, indice) => {
    if(elemento % 2 == 0 && indice % 2 == 0){
      return true;
    }
  })

  return pares;
}

console.log(indiceEValorPares([2, 3, 4]));