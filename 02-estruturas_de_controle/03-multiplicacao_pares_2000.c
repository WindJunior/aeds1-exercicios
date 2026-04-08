/*
3. Faça um programa que multiplique todos os números pares abaixo de
2000 que são múltiplos de 4 ou 6.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    double produto = 1.0;
    int encontrou = 0;

    for (int i = 2; i < 2000; i += 2) {
        if (i % 4 == 0 || i % 6 == 0) {
            produto = produto * i;
            encontrou = 1;
        }
    }

    if (encontrou == 1) {
        printf("O produto dos numeros pares menores que 2000 multiplos de 4 ou 6 e: %g\n", produto);
    } else {
        printf("Nenhum numero encontrado.\n");
    }

    system("pause");
    return 0;
}
