#include <stdio.h>

int main () {

  int cont = 233;

  do {

    printf("%d \n", cont);
    
    if (cont >= 300 && cont <= 400) {
      cont = cont + 3;
    } else {
      cont = cont + 5;
    }

  } while (cont <= 457);
  

  return 0;
}