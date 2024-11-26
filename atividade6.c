#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int i, j;
    
    fgets(string, sizeof(string), stdin);

    // Remover o caractere '\n' caso seja lido
    string[strcspn(string, "\n")] = '\0';

    int comprimento = strlen(string);

    // Inverter a string
    for (i = 0, j = comprimento - 1; i < j; i++, j--) {
        char temp = string[i];
        string[i] = string[j];
        string[j] = temp;
    }

    printf("String invertida: %s\n", string);

    return 0;
}
