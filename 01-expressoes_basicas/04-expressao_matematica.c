#include <stdio.h>

int main() {
    int a = 0, b = 0, resultado = 0;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    resultado = (b * b + a * b) - 2 * b + (a % b);

    printf("f(x) = %d\n", resultado);

    return 0;
}
