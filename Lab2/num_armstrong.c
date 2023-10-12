#include <stdio.h>
#include <math.h>

int main() {
    int num, numDigitos = 0, somaDigitos = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);
    
    if (num >= 0) {
        
        for (int cont = num; cont > 0; cont = cont / 10) {
            numDigitos++;
        }
        
        for (int cont = num; cont > 0; cont = cont / 10) {
            somaDigitos = somaDigitos + pow(cont % 10, numDigitos);
        }
        
        if (somaDigitos == num) {
            printf("%d é um número de Amstrong.\n ", num);
        } else {
            printf("%d não é um número de Amstrong. \n", num);
        }
        
    } else {
        
        printf("Não existem números de Amstrong inferiores a zero.");
        
    }

    return 0;
}
