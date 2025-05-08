#include <stdio.h>

void desenharQuadrado(char simbolo, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%c ", simbolo);
        }
        printf("\n");
    }
}

int main() {
    char caractere;
    int lado;

    printf("Digite o caractere para desenhar o quadrado: ");
    scanf(" %c", &caractere);  // espaço antes de %c para ignorar qualquer enter anterior

    printf("Digite o tamanho do lado do quadrado: ");
    scanf("%d", &lado);

    desenharQuadrado(caractere, lado);

    return 0;
}

