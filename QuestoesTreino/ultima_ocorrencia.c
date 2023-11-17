#include <stdio.h>

// Função para encontrar a última ocorrência de 'ch' em 's'
int strchar_last(char s[], char ch) {
    int i = 0;
    int lastOccurrence = -1;

    while (s[i] != '\0') {
        if (s[i] == ch) {
            // Atualiza o índice da última ocorrência de 'ch'
            lastOccurrence = i;
        }
        i++;
    }

    // Retorna o índice da última ocorrência ou -1 se 'ch' não foi encontrado em 's'
    return lastOccurrence;
}

int main() {
    // Testando a função strchar_last com uma string e um caractere
    char minhaString[] = "abnanana";
    char caractereProcurado = 'ch';

    // Chamando a função strchar_last e armazenando o resultado em um índice
    int indice = strchar_last(minhaString, caractereProcurado);

    // Verificando se o caractere foi encontrado e exibindo o resultado
    if (indice != -1) {
        printf("A última ocorrência do caractere '%c' foi encontrada no índice %d\n", caractereProcurado, indice);
    } else {
        printf("O caractere '%c' não foi encontrado na string.\n", caractereProcurado);
    }

    return 0;
}