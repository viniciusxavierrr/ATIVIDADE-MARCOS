#include <stdio.h>
#include <string.h>
#include <ctype.h>

int verificarPalindromo(char *str) {
    int inicio = 0, fim = strlen(str) - 1;

    while (inicio < fim) {
        if (tolower(str[inicio]) != tolower(str[fim])) {
            return 0;
        }
        inicio++;
        fim--;
    }

    return 1;
}

int main() {
    char string[100];

    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = '\0';

    if (verificarPalindromo(string)) {
        printf("A string e um palindromo.\n");
    } else {
        printf("A string nao e um palindromo.\n");
    }

    return 0;
}
