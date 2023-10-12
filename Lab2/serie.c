#include <stdio.h>

int main () {

  int n;

  scanf("%d", &n);

  int termos[n + 1];

  scanf("%d", &termos[0]);
  scanf("%d", &termos[1]);

  for (int i = 2; i <= n; i++) {

    termos[i] = (4*termos[i-1]) - (2*termos[i-2]);

  }

  for (int i = 0; i <= n; i++) {

    printf("X%d: %d \n", i, termos[i]);

  }

  return 0;
}