/* Escreva uma função que recebe uma string de caracteres e uma letra e devolve um vetor de inteiros contendo as 
posições (índices no vetor da string) onde a letra foi encontrada) e um inteiro contendo o tamanho do vetor criado 
(total de letras iguais encontradas). Utilize o retorno de um vetor para retornar os índices e um ponteiro para 
guardar o tamanho do vetor. */

#include <stdio.h>
#include <stdlib.h>
int *acha_caractere(char *str, char c, int *pn) {
    int j = 0, tam = 0, *indices = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            tam++;
        }
    }
    indices = (int *) malloc(tam*sizeof(int));

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            indices[j] = i;
            j++;
        }
    }

    *pn = tam;
    return indices;
}
int main() {
    int *indices = 0, n = 0, i;
    char *frase = "teste";

    indices = acha_caractere(frase, 'e', &n);

    for (i = 0; i < n; i++) {
        printf("%d ", indices[i]);
    }
    return 0;
}