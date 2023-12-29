/* Criar uma funcao que receba uma string como parametro e conte quantas palavras tem nela. */

function contaPalavras(string){
  string = string.replace(/^\s+/, ''); //Remover espacos em branco antes do primeiro caractere
  string = string.replace(/\s+$/, ''); //Remover espacos em branco depois do ultimo caractere
  const arrayPalavras = string.split(" ");

  if(arrayPalavras[0] === "" && arrayPalavras.length == 1){
    return 0;
  } else {
    return arrayPalavras.length;
  }
}

console.log(contaPalavras("Hello world!"));