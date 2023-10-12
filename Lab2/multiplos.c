#include <stdio.h>

int main () {

  int num;
  int mult_dois = 0, mult_tres = 0, mult_cinco = 0, mult_todos = 0;

  scanf("%d", &num);

  while (num > 0) {
    
    if (num % 2 == 0) {
      mult_dois++;
    } 
    
    if (num % 3 == 0) {
      mult_tres++;
    } 

    if (num % 5 == 0) {
      mult_cinco++;
    }

    if (num % 2 == 0 && num % 3 == 0 && num % 5 == 0) {
      mult_todos++;
    }

    num--;
  }
  
  printf("Múltiplos de 2: %d \n", mult_dois);
  printf("Múltiplos de 3: %d \n", mult_tres);
  printf("Múltiplos de 5: %d \n", mult_cinco);
  printf("Múltiplos de todos: %d \n", mult_todos);

  return 0;
}