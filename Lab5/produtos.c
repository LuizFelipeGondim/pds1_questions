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
  int quantidade;
  float valorTotal;
};

int main() {
  struct produto produtos[TAM];
  struct controleProduto controle[TAM];
  int contadorMarcasDiferentes = 0;
  float precoMedioTotal = 0.0;

  for (int i = 0; i < TAM; ++i) {
    scanf("%49s %49s %f", produtos[i].nome, produtos[i].marca, &produtos[i].preco);
  }

  for (int i = 0; i < 8; i++) {
    int isDiferente = 1;
    for (int j = 0; j <= contadorMarcasDiferentes; j++) {
      if (strcmp(produtos[i].marca, controle[j].marca) == 0) {
        isDiferente = 0;
        break;
      }
    }
    if (isDiferente) {
      strcpy(controle[contadorMarcasDiferentes].marca, produtos[i].marca);
      contadorMarcasDiferentes++;
    }
  }

    for (int i = 0; i < contadorMarcasDiferentes; ++i) {
      controle[i].quantidade = 0;
    }


  for (int i = 0; i < TAM; ++i) {
    for (int j = 0; j < contadorMarcasDiferentes; ++j) {
        
      if (strcmp(produtos[i].marca, controle[j].marca) == 0){
        controle[j].quantidade++;

        controle[j].valorTotal += produtos[i].preco;
        precoMedioTotal += produtos[i].preco;
      }
    }
  }

  for (int i = 0; i < contadorMarcasDiferentes; ++i) {
    printf("%s %d \n", controle[i].marca, controle[i].quantidade);
  }

  printf("media total %.2f \n", precoMedioTotal/TAM);

  for (int i = 0; i < contadorMarcasDiferentes; ++i) {
    printf("media %s %.2f \n", controle[i].marca, controle[i].valorTotal/controle[i].quantidade);
  }
  return 0;
}