/* Elabore uma funcao que recebe um objeto com estudantes e suas notas. Voce devera calcular a 
media da nota de cada aluno e retornar um objetocom os atributos nome e media, que indica o aluno 
que teve o melhor desempenho nas notas. */

function melhorDesempenho(estudantes){
  let melhorEstudante = null;
  let maiorMedia = 0;

  for(let aluno in estudantes){
    let somaNotas = 0;
    let notas = estudantes[aluno];

    for(let i = 0; i < notas.length; i++){
      somaNotas += notas[i]; 
    }

    let media = somaNotas/notas.length;

    if(media > maiorMedia){
      maiorMedia = media;
      melhorEstudante = aluno;
    }
  }

  return { nome: melhorEstudante, media: maiorMedia.toFixed(2)};
} 

let notasDosEstudantes = {
  Joao: [8, 9, 9],
  Maria: [7, 8, 9],
  Pedro: [9, 1, 10]
};

console.log(melhorDesempenho(notasDosEstudantes));