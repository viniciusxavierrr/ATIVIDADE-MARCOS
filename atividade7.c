#include <stdio.h>
#include <string.h>

int main() {
    char string[100], caractere;
    int contagem = 0;

    fgets(string, sizeof(string), stdin);
    scanf("%c", &caractere);

    string[strcspn(string, "\n")] = '\0';

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == caractere) {
            contagem++;
        }
    }

    printf("O caractere '%c' aparece %d vez(es) na string.\n", caractere, contagem);

    return 0;
}
