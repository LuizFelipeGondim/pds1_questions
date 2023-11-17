#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para gerar uma matriz com valores aleatórios
void gerarMatrizAleatoria(int linhas, int colunas, int matriz[][colunas]) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = rand() % 10;  // Números aleatórios de 0 a 9
        }
    }
}

// Função para imprimir uma matriz
void imprimirMatriz(int linhas, int colunas, int matriz[][colunas]) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Função para multiplicar duas matrizes
void multiplicarMatrizes(int linhasA, int colunasA, int matrizA[][colunasA],
                         int linhasB, int colunasB, int matrizB[][colunasB],
                         int resultado[][colunasB]) {
    
}

int main() {
    srand(time(NULL));

    int linhasA, colunasA, linhasB, colunasB;

    scanf("%d %d %d %d", &linhasA, &colunasA, &linhasB, &colunasB);
   

    if (colunasA == linhasB) {
      int matrizA[linhasA][colunasA];
      int matrizB[linhasB][colunasB];
      int resultado[linhasA][colunasB];

      for (int i = 0; i < linhasA; i++) 
        for (int j = 0; j < colunasA; j++) 
            matrizA[i][j] = rand() % 10;

      for (int i = 0; i < linhasA; i++) {
          for (int j = 0; j < colunasA; j++) {
              printf("%d ", matrizA[i][j]);
          }
          printf("\n");
      }

      for (int i = 0; i < linhasB; i++) 
        for (int j = 0; j < colunasB; j++) 
            matrizB[i][j] = rand() % 10;

      for (int i = 0; i < linhasB; i++) {
          for (int j = 0; j < colunasB; j++) {
              printf("%d ", matrizB[i][j]);
          }
          printf("\n");
      }

      for (int i = 0; i < linhasA; i++) {
          for (int j = 0; j < colunasB; j++) {
              resultado[i][j] = 0;
              for (int k = 0; k < colunasA; k++) {
                  resultado[i][j] += matrizA[i][k] * matrizB[k][j];
              }
          }
      }

      for (int i = 0; i < linhasA; i++) {
          for (int j = 0; j < colunasB; j++) {
              printf("%d ", resultado[i][j]);
          }
          printf("\n");
      }
    } else {
      printf("A multiplicação não é possível!");
    }
    

    return 0;
}
