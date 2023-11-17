#include <stdio.h>
#include <stdlib.h>

void lerVetor(int *vet, int tam) {
    for (int i = 0; i < tam; i++)
        scanf("%d", &vet[i]);
    
}

int main() {
    int n, tamArray; 

    scanf("%d", &n);
    scanf("%d", &tamArray);

    int **matriz = (int **)malloc(n * sizeof(int *));

    for (int i = 0; i < n; i++) {
        matriz[i] = (int *)malloc(tamArray * sizeof(int));
        lerVetor(matriz[i], tamArray);
    }

    int linhas = n, colunas = tamArray;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        free(matriz[i]);
    }

    free(matriz);

    return 0;
}
