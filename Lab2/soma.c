#include <stdio.h>

int main () {

  int num, soma = 0;

  scanf("%d", &num);

  for (int i = 1; i <= num; i++) {

    soma = soma + i;

  }

  printf("%d", soma);

  return 0;
}