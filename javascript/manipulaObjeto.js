/* Quando temos um objeto e manipulamos seus atributos, adicionando, atualizando ou rmeovendo-os, estamos
apenas modificando-o, mas, em essencia, o objeto continua o mesmo, ou seja, a sua referencia de memoria 
eh a mesma.
Num projeto que voce esta trabalhando, voce foi designado a refatorar diversas funcoes para que facam 
copias de objetos e manipulem os dados dessas copias, com o intuito de evitar efeitos indesejaveis em
algumas situacoes devido a referencias a objetos.
Voce escrevera uma funcao que recebe um objeto como primeiro parametro e, como segundo parametro, o
nome de uma propriedade contida nesse objeto, Em seguida, retorne uma copia desse objeto sem a 
propriedade especificada no segundo parametro. */

function removerPropriedade(objeto, propriedadeRemovida){
  const copia = {...objeto};
  delete copia[propriedadeRemovida];

  return copia;
}

objeto = {
  a: 1,
  b: 2,
  pular() {
    console.log("pular")
  }
}

console.log(removerPropriedade(objeto, "pular"));
console.log(Object.is(removerPropriedade(objeto, "pular"), objeto));