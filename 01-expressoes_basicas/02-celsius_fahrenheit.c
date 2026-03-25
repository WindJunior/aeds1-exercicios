#include <stdio.h>

int main() {
    float celsius = 0.0, far = 0.0;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    far = (celsius * (9.0 / 5.0)) + 32.0;

    printf("%.1f graus Celsius equivalem a %.1f graus Fahrenheit\n", celsius, far);

    return 0;
}
