#include <stdio.h>
#include <ctype.h>

int contarLetras(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    char texto[100];

    printf("Digite uma palavra: ");
    fgets(texto, sizeof(texto), stdin);

    int totalLetras = contarLetras(texto);
    printf("Número de letras: %d\n", totalLetras);

    return 0;
}

