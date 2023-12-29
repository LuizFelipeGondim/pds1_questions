/* Crie uma funcao que receba quatro numeros como parametro (numero, minimo, maximo, inclusivo) e 
retorne se o parametro numero (o primeiro) esta entre minimo e maximo. Quando o parametro inclusivo
for true, tenha "entre" como inclusivo, ou seja, considerando se numero eh igual a minimo
ou a maximo. Caso o parametro inclusivo nao seja informado, seu valor padrao devera ser false,
portanto, a logica sera exclusiva, nao considerando se numero eh igual a minimo ou a maximo */

function intervalo(num, min, max, inclusivo = false) {
  if(inclusivo){
    if(num >= min && num <= max){
      console.log(true);
    } else {
      console.log(false);
    }
  } else {
    if(num > min && num < max){
      console.log(true);
    } else {
      console.log(false);
    }
  }
}

intervalo(60, 50, 100);
intervalo(16, 100, 160);
intervalo(3, 3, 150);
intervalo(3, 3, 150, true);