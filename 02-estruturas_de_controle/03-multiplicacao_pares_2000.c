/*
3. Faça um programa que multiplique todos os números pares abaixo de
2000 que são múltiplos de 4 ou 6.
*/

#include <stdio.h>

int main() {

    double produto = 1.0;
    int encontrou = 0;

    for (int i = 2; i < 2000; i += 2) {
        if (i % 4 == 0 || i % 6 == 0) {
            produto *= i;
            encontrou = 1;
        }
    }

    if (encontrou) {
        printf("O produto dos numeros pares menores que 2000 multiplos de 4 ou 6 e: %e\n", produto);
    } else {
        printf("Nenhum numero encontrado.\n");
    }

    return 0;
}
