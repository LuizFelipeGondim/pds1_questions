#include <stdio.h>


int isPrimeNumber (unsigned long int num) {
    if (num >= 2) {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                return 0;
            }
        }
    
        return 1;
        
    } else {
        return -1;
    }
}

int main () {
    unsigned long int num;

    while(scanf("%lu", &num) != EOF) {
        printf("%d \n", isPrimeNumber(num));
    }
    return 0;
}