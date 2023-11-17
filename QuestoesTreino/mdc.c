#include <stdio.h>
#include <stdlib.h>

int mdc(int a, int b) {
  int r;

  while (b != 0) {
    r = a % b;
    a = b;
    b = r;
  }
  
  return a;
}

int main(){

  printf("MDC: %d", mdc(48,10));
  system("pause");
  return 0;
}