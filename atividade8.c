#include <stdio.h>
#include <string.h>
#include <ctype.h>

void removerEspacos(char *str) {
    int inicio = 0, fim = strlen(str) - 1;

    while (isspace(str[inicio])) {
        inicio++;
    }

    while (isspace(str[fim])) {
        fim--;
    }

    for (int i = 0; i <= fim - inicio; i++) {
        str[i] = str[inicio + i];
    }

    str[fim - inicio + 1] = '\0';
}

int main() {
    char string[100];

    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = '\0';

    removerEspacos(string);

    printf("String sem espaços: '%s'\n", string);

    return 0;
}
