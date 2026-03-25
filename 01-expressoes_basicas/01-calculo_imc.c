#include <stdio.h>

int main() {
    float altura = 0.0, peso = 0.0, imc = 0.0;

    printf("Digite a altura da pessoa: ");
    scanf("%f", &altura);

    printf("Digite o peso da pessoa: ");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    printf("O indice de Massa Corporal desta pessoa e %.4f\n", imc);

    return 0;
}