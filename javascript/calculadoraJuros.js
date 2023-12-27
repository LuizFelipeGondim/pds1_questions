/* 06) Elabore duas funções que recebem três parâmetros: capital inicial, taxa de juros e tempo de aplicação. A
primeira função retornará o montante da aplicação financeira sob o regime de juros simples e a segunda
retornará o valor da aplicação sob o regime de juros compostos. */

const jurosSimples = function (capitalInicial, taxaJuros, tempoAplicacao) {
  const montante = capitalInicial + (capitalInicial * taxaJuros * tempoAplicacao);
  return montante.toFixed(2);
}

const jurosCompostos = function (capitalInicial, taxaJuros, tempoAplicacao){
  const montante = capitalInicial * Math.pow((1+taxaJuros), tempoAplicacao);
  return montante.toFixed(2);
}

console.log(jurosSimples(1000, 0.05, 2));
console.log(jurosCompostos(1000, 0.05, 2));