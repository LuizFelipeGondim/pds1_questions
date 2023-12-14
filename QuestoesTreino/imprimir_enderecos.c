//4) Crie um programa que contenha uma matriz de float contendo três linhas e três colunas. Imprima o endereço de cada posição dessa matriz.
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float mat[3][3];
  float *p = &mat[0][0];

  for(int i = 0; i < 9; i++){
    printf("Endereço do elemento %d: %p\n", i, (p+i));
  }

  printf("\n");

  //Outra alternativa
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      printf("Endereço do elemento: %p\n", &mat[i][j]);
    }
  }

  return 0;
}