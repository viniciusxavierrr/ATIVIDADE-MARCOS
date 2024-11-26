#include <stdio.h>

int main() {
    char string1[100], string2[100], string3[100];

    // Leitura da primeira string
    fgets(string1, sizeof(string1), stdin);
    
    // Impressão da primeira string
    printf("%s", string1);

    // Leitura das duas próximas strings
    fgets(string2, sizeof(string2), stdin);
    fgets(string3, sizeof(string3), stdin);

    // Impressão das duas próximas strings
    printf("%s", string2);
    printf("%s", string3);

    return 0;
}
