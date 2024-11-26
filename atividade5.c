#include <stdio.h>
#include <ctype.h>

int main() {
    char string[100];
    
    fgets(string, sizeof(string), stdin);

    // Converter para maiúsculas
    for (int i = 0; string[i] != '\0'; i++) {
        string[i] = toupper(string[i]);
    }

    printf("Maiúsculas: %s\n", string);

    // Converter para minúsculas
    for (int i = 0; string[i] != '\0'; i++) {
        string[i] = tolower(string[i]);
    }

    printf("Minúsculas: %s\n", string);

    return 0;
}
