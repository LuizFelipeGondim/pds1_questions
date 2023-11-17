#include <stdio.h>
#include <stdlib.h>

void lerVetor(int *vet, int tam) {
    
    for (int i = 0; i < tam; i++) 
        scanf("%d", &vet[i]);
    
}

int main() {
    int n;

    scanf("%d", &n);

    int *vet = (int *)malloc(n * sizeof(int));

    lerVetor(vet, n);

    for (int i = 0; i < n; i++) {
        printf("%d \n", vet[i]);
    }

    free(vet);

    return 0;
}
