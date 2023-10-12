#include <stdio.h>

struct aluno {
    int num_aluno;
    float nota1, nota2, nota3;
    float media;
};

int main()
{
    struct aluno alunos[2];
    
    for (int i = 0; i < 2; ++i){
        scanf("%d", &alunos[i].num_aluno);
        scanf("%f", &alunos[i].nota1);
        scanf("%f", &alunos[i].nota2);
        scanf("%f", &alunos[i].nota3);
        float soma_notas = alunos[i].nota1+alunos[i].nota2+alunos[i].nota3;
        alunos[i].media = soma_notas/3; 
    }
    
    for (int i = 0; i < 2; ++i){
        printf("Aluno da matrícula: %d, ficou com média: %f \n", alunos[i].num_aluno, alunos[i].media);
    }

    return 0;
}