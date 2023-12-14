/*8) Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo do vetor. A função 
deverá preencher os elementos de vetor com esse valor. Não utilize índices para percorrer o vetor, 
apenas aritmética de ponteiros. */

#include <stdio.h>
#include <stdlib.h>

void preencher(int *vet, int n){
  for(int i = 0; i < n; i++){
    *(vet+i) = n;  
  }
}

int main(void) {
  int vet[5], n = 5; 

  preencher(vet, n);

  for(int i = 0; i < n; i++){
    printf("Elemento: %d \n", *(vet+i));;  
  }

  return 0;
}