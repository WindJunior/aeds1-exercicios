/*
5. Cálculo da Taxa Metabólica Basal (TMB)
Escreva um programa em linguagem C que:
• Leia o sexo (M para masculino, F para feminino), a idade (em anos), o
peso (em kg) e a altura (em cm) de uma pessoa;
• Calcule a Taxa Metabólica Basal (TMB) com base nas fórmulas:
o Para homens:
TMB = 88,36+(13,4×peso)+(4,8×altura)−(5,7×idade)
o Para mulheres:
TMB = 447,6+(9,2×peso)+(3,1×altura)−(4,3×idade)
• Classifique o valor da TMB de acordo com a faixa etária e a tabela a
seguir:
Faixa Etária (anos) Classificação da TMB
Até 25 Metabolismo Acelerado
26 a 45 Metabolismo Normal
46 a 60 Metabolismo Moderado
Acima de 60 Metabolismo Lento
• Exiba o valor calculado da TMB e sua respectiva classificação.
*/

#include <stdio.h>

int main() {
    char sexo;
    int idade, altura;
    double peso, tmb;

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);
    
    if (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f') {
        printf("Sexo invalido!\n");
        return 1;
    }

    printf("Digite a idade (anos): ");
    if (scanf("%d", &idade) != 1 || idade <= 0) {
        printf("Idade invalida!\n");
        return 1;
    }

    printf("Digite o peso (kg): ");
    if (scanf("%lf", &peso) != 1 || peso <= 0) {
        printf("Peso invalido!\n");
        return 1;
    }

    printf("Digite a altura (cm): ");
    if (scanf("%d", &altura) != 1 || altura <= 0) {
        printf("Altura invalida!\n");
        return 1;
    }

    if (sexo == 'M' || sexo == 'm') {
        tmb = 88.36 + (13.4 * peso) + (4.8 * altura) - (5.7 * idade);
    } else {
        tmb = 447.6 + (9.2 * peso) + (3.1 * altura) - (4.3 * idade);
    }

    printf("Taxa Metabolica Basal (TMB): %.2f cal/dia\n", tmb);

    printf("Classificacao: ");
    if (idade <= 25) {
        printf("Metabolismo Acelerado\n");
    } else if (idade <= 45) {
        printf("Metabolismo Normal\n");
    } else if (idade <= 60) {
        printf("Metabolismo Moderado\n");
    } else {
        printf("Metabolismo Lento\n");
    }

    return 0;
}
