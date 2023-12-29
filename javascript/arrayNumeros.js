/* Crie uma funcao que receba um array de elementos e retorne um array somente com os numeros presentes no
array recebido como parametro. */

function filtrarNumeros(array){
  const arrayNumeros = array.filter(elemento => typeof elemento === "number");

  return arrayNumeros;
}

console.log(filtrarNumeros(["Javascript", 1, "3", "Web", 0]));