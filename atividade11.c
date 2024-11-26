#include <stdio.h>
#include <string.h>

int main() {
    char frase[200];
    char palavras[20][50];  // Supondo no máximo 20 palavras, com 50 caracteres cada
    int i = 0;

    fgets(frase, sizeof(frase), stdin);

    // Remover o caractere '\n' que pode ser inserido por fgets()
    frase[strcspn(frase, "\n")] = '\0';

    // Utilizar strtok para quebrar a string
    char *palavra = strtok(frase, " ");
    
    // Enquanto houver palavras, armazene no vetor
    while (palavra != NULL) {
        strcpy(palavras[i], palavra);
        i++;
        palavra = strtok(NULL, " ");
    }

    // Imprimir as palavras armazenadas
    printf("Palavras encontradas: \n");
    for (int j = 0; j < i; j++) {
        printf("%s\n", palavras[j]);
    }

    return 0;
}
