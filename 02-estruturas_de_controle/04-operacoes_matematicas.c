/*
4. Escreva um programa em linguagem C que:
• Leia dois números inteiros fornecidos pelo usuário;
• Calcule a multiplicação entre os dois números e imprima o resultado;
• Com base no resultado da multiplicação, calcule a soma desse valor
com o primeiro número e imprima o valor da soma;
• Com base na soma, calcule a divisão desse valor pelo segundo
número e imprima o resultado da divisão;
• Por fim, subtraia o segundo número do valor obtido na divisão e
mostre o resultado final da subtração.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    long long num1, num2;
    printf("Digite o primeiro numero inteiro: ");
    scanf("%lld", &num1);
    
    printf("Digite o segundo numero inteiro: ");
    scanf("%lld", &num2);

    long long multiplicacao = num1 * num2;
    printf("Multiplicacao: %lld\n", multiplicacao);

    long long soma = multiplicacao + num1;
    printf("Soma: %lld\n", soma);

    if (num2 != 0) {
        long long divisao = soma / num2;
        printf("Divisao: %lld\n", divisao);

        long long subtracao = divisao - num2;
        printf("Subtracao (Resultado Final): %lld\n", subtracao);
    } else {
        printf("Nao e possivel realizar a divisao por zero.\n");
    }

    system("pause");
    return 0;
}
