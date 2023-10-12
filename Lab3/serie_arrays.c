#include <stdio.h>

int main() {
  int n;

  while (1) {

    scanf("%d", &n);
    
    if (n == -1) {
        break;
    }
    
    int fib[n+1];
    fib[0] = 0;
    fib[1] = 1;
    
    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    
    printf("%d \n", fib[n]);

  }

  return 0;
}