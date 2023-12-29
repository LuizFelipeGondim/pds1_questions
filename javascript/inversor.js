/* Escreva uma funcao que receba um valor booleano ou numerico. Se o parametro fornecido for booleano, o 
retorno da funcao devera ser o inverso (false caso o parametro seja true). Se o parametro for numerico, 
o retorno sera o numero inverso. Se o parametro de entrada nao for nenhum dos tipos acima, retorne 
"Booleano ou numero esperados, mas o parametro eh do tipo..." */

function inversor(valor){

  if(typeof valor == 'boolean'){
    return !valor;
  } else if (typeof valor == 'number') {
    return -valor;
  } else {
    return `Booleano ou numero esperados, mas o parametro eh do tipo ${typeof valor}`;
  }
}

console.log(inversor(true));
console.log(inversor(false));
console.log(inversor(8));
console.log(inversor(-9));
console.log(inversor("teste"));
console.log(inversor({}));
