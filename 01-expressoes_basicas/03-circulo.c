#include <stdio.h>

int main() {
    float raio = 0.0, area = 0.0, perimetro = 0.0;
    float pi = 3.14159;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = pi * raio * raio;
    perimetro = 2 * pi * raio;

    printf("Um circulo de raio %.2f possui area %.2f e perimetro %.2f\n", raio, area, perimetro);

    return 0;
}
