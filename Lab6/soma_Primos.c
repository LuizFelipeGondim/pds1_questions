#include <stdio.h>

int isPrimeNumber(int num) {
    if (num <= 1) {
        return 0; 
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    
    return 1; 
}

long int sumPrime(int quant) {
    long int sum = 0;
    int cont = 0;
    int num = 2;

    while (cont < quant) {
        if (isPrimeNumber(num)) {
            sum += num;
            cont++;
        }
        num++;
    }

    return sum;
}


int main () {
    int quant;

    while(scanf("%d", &quant) != EOF) {
        printf("%ld \n", sumPrime(quant));
    }
    return 0;
}