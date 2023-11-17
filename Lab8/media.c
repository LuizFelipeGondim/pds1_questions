#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void media(double vet[], int n, int *i) {

    double soma = 0.0;
    
    for (int j = 0; j < n; ++j) {
        soma += vet[j];
    }
    
    double media = soma / n;

    double dif_minima = fabs(vet[0] - media);

    for (int j = 1; j < n; ++j) {
        double dif = fabs(vet[j] - media);
        if (dif < dif_minima) {
            dif_minima = dif;
            *i = j;
        }
    }
}

int main() {

    int n;
    int i = 0;

    scanf("%d", &n);

    double vet[n];

    for (int j = 0; j < n; ++j) {
        scanf("%lf", &vet[j]);
    }

    media(vet, n, &i);

    printf("%d", i);

    return 0;
}