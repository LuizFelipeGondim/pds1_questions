/* 36) Crie duas funções que recebem dois parâmetros, um vetor com apenas valores numéricos e um número
inteiro. Faça com que a primeira função retorne outro vetor que será resultado da multiplicação de cada
elemento pelo número passado como parâmetro. A segunda função fará o mesmo da primeira se e somente se
o valor do elemento for maior que 5. */

function multiplicarNumero(vetNums, multiplicador) {
  for(let i = 0; i < vetNums.length; i++){
    vetNums[i] *= multiplicador;
  }

  return vetNums;
}

function multiplicarNumeroMaiorQueCinco(vetNums, multiplicador) {
  for(let i = 0; i < vetNums.length; i++){
    if(vetNums[i] > 5){
      vetNums[i] *= multiplicador;
    }
  }

  return vetNums;
}

console.log(multiplicarNumero([2,3,4], 2));
console.log(multiplicarNumeroMaiorQueCinco([2,3,6], 2));