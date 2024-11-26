#include <stdio.h>
#include <string.h>

void concatenaStrings(char *destino, const char *origem) {
    while (*destino) {  // Move até o final da string destino
        destino++;
    }
    while (*origem) {  // Copia os caracteres da origem para destino
        *destino = *origem;
        destino++;
        origem++;
    }
    *destino = '\0';  // Termina a string concatenada
}

int main() {
    char string1[100], string2[100];

    // Leitura das duas strings
    fgets(string1, sizeof(string1), stdin);
    fgets(string2, sizeof(string2), stdin);

    // Remover o caractere de nova linha se existir
    string1[strcspn(string1, "\n")] = '\0';
    string2[strcspn(string2, "\n")] = '\0';

    // Concatenar as strings
    concatenaStrings(string1, string2);

    // Imprimir o resultado da concatenação
    printf("Resultado da concatenação: %s\n", string1);

    return 0;
}
