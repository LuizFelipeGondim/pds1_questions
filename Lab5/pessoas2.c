#include <stdio.h>

#include <stdio.h>
#include <string.h>
#define TAM 5
#define MAX 50

struct enderecoPessoa {
  char rua[MAX];
  unsigned int numero;
  char estado[MAX];
};

struct pessoa {
    char nome[MAX];
    unsigned int idade;
    float salario;
    struct enderecoPessoa endereco;
};

int main()
{
    struct pessoa pessoas[TAM];
    char entrada[MAX], pessoaEscolhida[MAX];
    int indice = 0;

    while (fgets(entrada, 50, stdin) != NULL) {

      entrada[strcspn(entrada, "\n")] = '\0';

      if (strcmp(entrada, "inserir") == 0){

        scanf("%49s %u %f %49s %u %49s", pessoas[indice].nome, &pessoas[indice].idade, &pessoas[indice].salario, 
              pessoas[indice].endereco.rua, &pessoas[indice].endereco.numero, pessoas[indice].endereco.estado);

        if (indice < TAM){
          printf("Registro %s %u %.2f %s %u %s inserido \n", pessoas[indice].nome, pessoas[indice].idade, pessoas[indice].salario, 
              pessoas[indice].endereco.rua, pessoas[indice].endereco.numero, pessoas[indice].endereco.estado);
              
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
            printf("Registro %s %u %.2f %s %u %s \n", pessoas[i].nome, pessoas[i].idade, pessoas[i].salario, 
                pessoas[i].endereco.rua, pessoas[i].endereco.numero, pessoas[i].endereco.estado);
                
            encontrado = 1;
            break;
          } 
        }

        if (!encontrado)
          printf("Registro ausente \n");
        
      }

      if (strcmp(entrada, "alterar") == 0){
        int encontrado = 0;
        scanf("%49s", pessoaEscolhida);
        
        for (int i = 0; i < TAM; ++i){

          if (strcmp(pessoaEscolhida, pessoas[i].nome) == 0) {
            strcpy(pessoas[i].nome, pessoaEscolhida);
            
            scanf("%u %f %49s %u %49s", &pessoas[i].idade, &pessoas[i].salario, 
                pessoas[i].endereco.rua, &pessoas[i].endereco.numero, pessoas[i].endereco.estado);

            printf("Registro %s %u %.2f %s %u %s alterado \n", pessoas[i].nome, pessoas[i].idade, pessoas[i].salario, 
                pessoas[i].endereco.rua, pessoas[i].endereco.numero, pessoas[i].endereco.estado);

            encontrado = 1;
            break;
          } 
        }

        if (!encontrado)
          printf("Registro ausente para alteracao\n");
        
      }

    }

    return 0;
}