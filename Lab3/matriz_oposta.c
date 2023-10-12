#include <stdio.h>

int main () {

  int quant_linhas, quant_colunas;

  scanf("%d", &quant_linhas);
  scanf("%d", &quant_colunas);

  int matriz[quant_linhas][quant_colunas];


  for (int i = 0; i < quant_linhas; i++) {

    for (int j = 0; j < quant_colunas; j++) {

      scanf("%d", &matriz[i][j]);

    }

  }


  for (int i = 0; i < quant_linhas; i++) {

    for(int j = 0; j < quant_colunas; j++) {

      printf("%d ", -1 * matriz[i][j]);

    }

    printf("\n");

  }

  return 0;
}