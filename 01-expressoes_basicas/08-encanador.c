#include <stdio.h>

int main() {
    int dias = 0;
    float quantia_bruta = 0.0, quantia_liquida = 0.0, desconto = 0.0;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    quantia_bruta = dias * 30.0;
    desconto = quantia_bruta * 0.08;
    quantia_liquida = quantia_bruta - desconto;

    printf("A quantia liquida que devera ser paga e: R$ %.2f\n", quantia_liquida);

    return 0;
}
