#include <stdio.h>
#include <math.h>

int main() {
    float cateto1 = 0.0, cateto2 = 0.0, hipotenusa = 0.0;

    printf("Digite o valor do primeiro cateto: ");
    scanf("%f", &cateto1);

    printf("Digite o valor do segundo cateto: ");
    scanf("%f", &cateto2);

    hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);

    printf("A hipotenusa do triangulo e: %.2f\n", hipotenusa);

    return 0;
}
