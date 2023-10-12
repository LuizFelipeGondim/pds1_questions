#include <stdio.h>
#include <string.h>
#define TAM 4
#define MAX 50

struct pessoa {
    char nome[MAX];
    unsigned int idade;
    float salario;
};

int main()
{
    struct pessoa pessoas[TAM];
    char entrada[MAX], pessoaEscolhida[MAX];
    int indice = 0;

    while (fgets(entrada, 50, stdin) != NULL) {

      entrada[strcspn(entrada, "\n")] = '\0';

      if (strcmp(entrada, "inserir") == 0){

        scanf("%49s %d %f", pessoas[indice].nome, &pessoas[indice].idade, &pessoas[indice].salario);
        if (indice < TAM){
          printf("Registro %s %d %.2f inserido \n", pessoas[indice].nome, pessoas[indice].idade, pessoas[indice].salario);
          indice++;
        } else {
          printf("Espaco insuficiente \n");
        }

      }

      if (strcmp(entrada, "mostrar") == 0){
        int encontrado = 0;

        scanf("%49s", pessoaEscolhida);

        for (int i = 0; i < TAM; ++i){
          if (strcmp(pessoaEscolhida, pessoas[i].nome) == 0) {
            printf("Registro %s %d %.2f \n", pessoas[i].nome, pessoas[i].idade, pessoas[i].salario);
            encontrado = 1;
            break;
          } 
        }

        if (!encontrado)
          printf("Registro ausente \n");
        
      }

    }

    return 0;
}