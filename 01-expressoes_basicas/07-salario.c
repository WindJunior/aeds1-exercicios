#include <stdio.h>

int main() {
    float salario_base = 0.0, gratificacao = 0.0, imposto = 0.0, salario_receber = 0.0;

    printf("Digite o salario base do funcionario: ");
    scanf("%f", &salario_base);

    gratificacao = salario_base * 0.05;
    imposto = salario_base * 0.07;
    salario_receber = salario_base + gratificacao - imposto;

    printf("O salario a receber e: %.2f\n", salario_receber);

    return 0;
}
