#include <stdio.h>

int main() {
    float fahrenheit = 0.0, celsius = 0.0;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = 5.0 * (fahrenheit - 32.0) / 9.0;

    printf("A temperatura em Celsius e: %.2f\n", celsius);

    return 0;
}
