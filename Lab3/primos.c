#include <stdio.h>

int main () {

  int a, b, resultado = 0;

  scanf("%d", &a);
  scanf("%d", &b);

  if (a == 1) {
    a = 2;
  }

  for (int i = a; i <= b; i++) {
      
    resultado = 0;
    
    for (int j = 2; j <= i / 2; j++) {
        
      if (i % j == 0) {

        resultado++;
        break;

      }
      
    }
    
    if (resultado == 0) {
      printf("%d \n", i);
    }

  }
  
  return 0;
}