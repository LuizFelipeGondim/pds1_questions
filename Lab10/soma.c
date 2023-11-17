#include <stdio.h>
#include <stdlib.h>

void soma(int *vet1, int *vet2, int *result, int tam) {
    for (int i = 0; i < tam; i++) {
        result[i] = vet1[i] + vet2[i];
    }
}

int main() {
    int tam;

    scanf("%d", &tam);

    int *vet1 = (int *)malloc(tam * sizeof(int));
    int *vet2 = (int *)malloc(tam * sizeof(int));
    int *result = (int *)malloc(tam * sizeof(int));

    for (int i = 0; i < tam; i++) {
        scanf("%d", &vet1[i]);
    }

    for (int i = 0; i < tam; i++) {
        scanf("%d", &vet2[i]);
    }

    soma(vet1, vet2, result, tam);

    for (int i = 0; i < tam; i++) {
        printf("%d ", result[i]);
    }

    free(vet1);
    free(vet2);
    free(result);

    return 0;
}