#include <stdio.h>
#include <string.h>
#define TAM 8
#define MAX 50

struct produto {
    char nome[MAX];
    char marca[MAX];
    float preco;
};

struct controleProduto {
    char marca[MAX];
    int quantidade = 0;
    float valorTotal;
}

int main() {
  struct produto produtos[TAM];
  struct controleProduto controle[TAM];
  int contProduto = 0;

  for (int i = 0; i < TAM; ++i) {
    scanf("%49s %49s %f", produtos[i].nome, produtos[i].marca, &produtos[i].preco);
  }

  strcpy(controle[0].marca, produtos[0].marca);

  for (int i = 0; i < TAM; ++i) {
      for (int j = 0; j < TAM; ++j) {
          
      }
    if (strcmp(controle[i].marca, produtos[i].marca) == 0){
        controle[i].quantidade++;

        controle[i].valorTotal = produtos[i].preco;
    }
  }
  

  return 0;
}