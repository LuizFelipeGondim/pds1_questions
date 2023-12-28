/* 20) Crie um programa para informar quais e quantas notas são necessárias para entregar o mínimo de cédulas
para um determinado valor informado pelo usuário considerando notas de R$ 100, R$ 50, R$ 10 e R$ 5 e R$ 1.
Seu programa deve mostrar apenas as notas utilizadas. Por exemplo, ao solicitar R$18, o programa deve
informar apenas a seguinte informação (note que não foram exibidas informações sobre as demais cédulas): 1
nota(s) de R$ 10. 1 nota(s) de R$ 5. 3 nota(s) de R$ 1. */

function calcularCedulas(valor) {
  const cedulas = [100, 50, 10, 5, 1];
  let resto = valor;
  
  console.log(`Valor a ser sacado: R$ ${valor.toFixed(2)}`);
  console.log("Notas utilizadas:");

  for (let i = 0; i < cedulas.length; i++) {
      const quantidadeCedulas = Math.floor(resto / cedulas[i]);
      
      if (quantidadeCedulas > 0) {
          console.log(`${quantidadeCedulas} nota(s) de R$ ${cedulas[i].toFixed(2)}`);
          resto = resto % cedulas[i];
      }
  }
}

calcularCedulas(113);
calcularCedulas(259);