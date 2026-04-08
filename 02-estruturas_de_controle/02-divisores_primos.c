/*
2. Faça um programa que demonstre todos os divisores para os números
entre 1 e N, N é um valor que você deverá receber do usuário. Dê um
destaque para todo número que for primo.
*/

#include <stdio.h>

int eh_primo(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Digite o valor de N: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Entrada invalida. Digite um numero inteiro positivo.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        if (eh_primo(i)) {
            printf("%d (PRIMO): ", i);
        } else {
            printf("%d: ", i);
        }

        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                printf("%d ", j);
            }
        }
        printf("\n");
    }

    return 0;
}
