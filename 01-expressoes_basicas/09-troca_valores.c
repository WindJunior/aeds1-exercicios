#include <stdio.h>

int main() {
    int a = 0, b = 0, temp = 0;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("Valores trocados:\n");
    printf("A: %d\n", a);
    printf("B: %d\n", b);

    return 0;
}
