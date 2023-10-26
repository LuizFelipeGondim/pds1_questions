#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  FILE *arquivo;     
  arquivo = fopen("./arquivo.bin", "rb");

  int contA = 0; 
  char caractere;

  while (fread(&caractere, sizeof(char), 1, arquivo) == 1) {
    if(caractere == 'a')
        contA++;
  }

  fclose(arquivo);

  printf("%d", contA);

  return 0;
}