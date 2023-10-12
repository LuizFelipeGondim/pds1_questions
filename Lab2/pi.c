#include <stdio.h>
#include <math.h>

int main() {

  double pi_aproximado = 0.0;
  double diferenca;
  double X;
  int cont;

  scacontf("%lf", &X);

  for (cont = 0; ; cont++) {
      double termo = 4.0 / (2 * cont + 1);

      if (cont % 2 == 0) {
          pi_aproximado += termo;
      } else {
          pi_aproximado -= termo;
      }

      diferenca = fabs(M_PI - pi_aproximado);

      if (diferenca <= X) {
          break;
      }
  }

  printf("%d\n", cont + 1);

  return 0;
}
