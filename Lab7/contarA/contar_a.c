#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *arquivo;     
    arquivo = fopen("./arquivo.txt", "r");

    int contA = 0; 

    char caractere = fgetc(arquivo);

    while (caractere != EOF) {
        if(caractere == 'a')
            contA++;

        caractere = fgetc(arquivo);
    }

    fclose(arquivo);

    printf("%d", contA);

    return 0;
}