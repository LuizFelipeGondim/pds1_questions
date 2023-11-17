#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int quantidade_maior(int matriz[4][4]){
  int soma = 0;
  int quantidade = 0;

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      soma += matriz[i][j];
    }
  }

  float media = soma / 16;
  printf("\nmedia: %f \n", media);

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (matriz[i][j] > media){
        quantidade++;
      }
    }
  }

  return quantidade;
}

int main() {
  int matriz[4][4];
  srand(time(NULL));
  
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++){
      matriz[i][j] = rand() % 10;
      printf("%d ", matriz[i][j]);
    }
     printf("\n");
  }

  int q = quantidade_maior(matriz);
  printf("A quantidade de elementos acima da média é: %d", q);
  return 0;
}
