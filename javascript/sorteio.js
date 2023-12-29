/* Desenvolva uma funcao que receba como parametro um numero de 1 a 10. Internamente, na funcao, sera
gerado um numero aleatorio de 1 a 10. A funcao devera retornar se o parametro de entrada for igual ao numero
sorteado internamente. Se o valor fornecido foi o sorteado, retorne "Parabens! O numero sorteado foi o X". Se
nao for igual, retorne "Que pena! O numero sorteado foi o X". X eh o numero sorteado. */

function sorteador(numEscolhido){
  const numSorteado = Math.floor(Math.random() * 10) + 1;
  
  if(numEscolhido === numSorteado){
    console.log(`Parabens! O numero sorteado foi o ${numSorteado}`);
  } else {
    console.log(`Que pena! O numero sorteado foi o  ${numSorteado}`);
  }
}

sorteador(9);