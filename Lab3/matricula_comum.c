#include <stdio.h>

int main () {

  int quant_alunos_aeds, quant_alunos_calc;

  scanf("%d", &quant_alunos_aeds);

  int aeds[quant_alunos_aeds];

  for (int i = 0; i < quant_alunos_aeds; i++) {

    scanf("%d", &aeds[i]);

  }

  scanf("%d", &quant_alunos_calc);

  int calc[quant_alunos_calc];

  for (int i = 0; i < quant_alunos_calc; i++) {

    scanf("%d", &calc[i]);

  }

  for (int i = 0; i < quant_alunos_aeds; i++) {

    for (int j = 0; j < quant_alunos_calc; j++) {

      if (aeds[i] == calc[j]) {
        printf("%d \n", calc[j]);
      }

    }

  }

  return 0;
}