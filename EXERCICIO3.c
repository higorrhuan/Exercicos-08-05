#include <stdio.h>

float media(float a, float b, float c) {
    float soma = (a + b + c) / 3;
    return soma;
}

int main() {
    float n1, n2, n3;

    printf("Digite 3 números:\n");
    scanf("%f %f %f", &n1, &n2, &n3);

    float resultado = media(n1, n2, n3);
    printf("A média é: %.2f\n", resultado);

    return 0;
}
