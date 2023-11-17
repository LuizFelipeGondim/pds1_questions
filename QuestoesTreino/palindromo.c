#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função para verificar se uma string é um palíndromo
int eh_palindromo(const char *s) {
    // Alocar espaço para a string sem espaços e em letras minúsculas
    char formatted_str[strlen(s) + 1];
    int index = 0;

    // Remover espaços e converter para letras minúsculas
    for (int i = 0; s[i] != '\0'; i++) {
        if (!isspace(s[i])) {
            formatted_str[index++] = tolower(s[i]);
        }
    }
    formatted_str[index] = '\0';

    // Verificar se a string é um palíndromo
    int length = strlen(formatted_str);
    for (int i = 0; i < length / 2; i++) {
        if (formatted_str[i] != formatted_str[length - i - 1]) {
            return 0;  // Não é um palíndromo
        }
    }

    return 1;  // É um palíndromo
}

int main() {
    // Exemplos de uso
    printf("%d\n", eh_palindromo("A cara rajada da jararaca"));  // Deve imprimir 1
    printf("%d\n", eh_palindromo("Anotaram a data da maratona"));  // Deve imprimir 1
    printf("%d\n", eh_palindromo("C é incrível"));  // Deve imprimir 0

    return 0;
}
