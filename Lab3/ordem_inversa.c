#include <stdio.h>
#define TAM 10

int main () {

  int x[TAM];


  for (int i = 0; i < TAM; i++) {

    scanf("%d", &x[i]);

  }

  for (int i = 1; i <= TAM; i++) {

    printf("%d \n", x[TAM - i]);

  }

  return 0;
}