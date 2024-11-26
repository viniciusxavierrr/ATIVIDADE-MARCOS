#include <stdio.h>

int main() {
    char string[100];
    int comprimento = 0;

    fgets(string, sizeof(string), stdin);

    while (string[comprimento] != '\0') {
        comprimento++;
    }

    printf("%d\n", comprimento);

    return 0;
}
