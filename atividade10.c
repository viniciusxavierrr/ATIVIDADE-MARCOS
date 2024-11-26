#include <stdio.h>
#include <string.h>  // Adicionada para usar strcspn

void substituirCaractere(char *str, char antigo, char novo) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == antigo) {
            str[i] = novo;
        }
    }
}

int main() {
    char string[100], antigo, novo;

    fgets(string, sizeof(string), stdin);
    scanf("%c", &antigo);
    scanf("%c", &novo);

    string[strcspn(string, "\n")] = '\0';  // Remover o '\n' da string

    substituirCaractere(string, antigo, novo);

    printf("String alterada: %s\n", string);

    return 0;
}
