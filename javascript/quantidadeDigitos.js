/* Elabore uma funcao que recebe dois parametros: o primeiro eh uma array de numeros e o segundo eh um numero 
que especifica uma quantidade de digitos. Essa funcao devera retornar somente aqueles numeros do array que 
tem a quantidade de digitos indicada pelo segundo parametro */

function filtrarNumeros(array, quantidadeDigitos) {

  const numerosFiltrados = array.filter(numero => numero.toString().length === quantidadeDigitos);

  return numerosFiltrados;
}

console.log(filtrarNumeros([123, 45, 6789, 12, 3456], 4));
