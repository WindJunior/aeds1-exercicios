/*
2. Faça um programa que demonstre todos os divisores para os números
entre 1 e N, N é um valor que você deverá receber do usuário. Dê um
destaque para todo número que for primo.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Digite o valor de N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int e_primo = 1;
        if (i <= 1) {
            e_primo = 0;
        } else {
            for (int k = 2; k < i; k++) {
                if (i % k == 0) {
                    e_primo = 0;
                }
            }
        }

        if (e_primo == 1) {
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

    system("pause");
    return 0;
}
