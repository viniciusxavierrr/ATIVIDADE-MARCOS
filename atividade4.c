#include <stdio.h>
#include <string.h>

int main() {
    char string1[100], string2[100];

    fgets(string1, sizeof(string1), stdin);
    fgets(string2, sizeof(string2), stdin);

    string1[strcspn(string1, "\n")] = '\0';
    string2[strcspn(string2, "\n")] = '\0';

    if (strcmp(string1, string2) == 0) {
        printf("As strings são iguais.\n");
    } else {
        printf("As strings são diferentes.\n");
    }

    return 0;
}
