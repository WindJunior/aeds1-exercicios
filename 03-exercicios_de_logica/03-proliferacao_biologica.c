#include <stdio.h>

int main() {
    int n;
    int anterior = 0, atual = 1, proximo;

    printf("Digite a quantidade de dias (N) para monitorar: ");
    if (scanf("%d", &n) != 1) {
        printf("Entrada inválida.\n");
        return 1;
    }

    if (n <= 0) {
        printf("Nenhum dado para monitorar\n");
    } else if (n == 1) {
        printf("0\n");
    } else {
        printf("Sequência de crescimento: ");
        
        printf("%d, %d", anterior, atual);

        for (int i = 3; i <= n; i++) {
            proximo = anterior + atual;
            printf(", %d", proximo);
            
            anterior = atual;
            atual = proximo;
        }
        printf("\n");
    }

    return 0;
}
