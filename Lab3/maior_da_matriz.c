#include <stdio.h>

int main () {

  int quant_linhas, quant_colunas, maior;

  scanf("%d", &quant_linhas);
  scanf("%d", &quant_colunas);

  int matriz[quant_linhas][quant_colunas];


  for (int i = 0; i < quant_linhas; i++) {

    for (int j = 0; j < quant_colunas; j++) {

      scanf("%d", &matriz[i][j]);

    }

  }

  maior = matriz[0][0];

  for (int i = 0; i < quant_linhas; i++) {

    for (int j = 0; j < quant_colunas; j++) {

      if (matriz[i][j] > maior) {
        maior = matriz[i][j];
      }

    }

  }

  printf("%d", maior);

  return 0;
}