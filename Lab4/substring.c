#include <stdio.h>
#include <string.h>
#define SIZE 20

int main() {
    char s1[SIZE], s2[SIZE];

    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    char *resultado = strstr(s1, s2);

    if (resultado != NULL) {
        printf("É substring \n");
    } else {
        printf("Não é substring \n");
    }

    return 0;
}
