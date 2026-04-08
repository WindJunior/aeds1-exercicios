/*
6. Números com Multiplicação de Dígitos
Escreva um programa em linguagem C que:
• Solicite ao usuário que digite dois números inteiros positivos A e B,
garantindo que A < B;
• Percorra todos os números no intervalo fechado de A a B e, para cada
número:
1. Verifique se ele é divisível por 2 ou 7, mas não por ambos ao mesmo
tempo;
2. Calcule a multiplicação dos dígitos do número (exemplo: para 235, a
multiplicação seria 2 × 3 × 5 = 30);
3. Se a multiplicação dos dígitos for um número ímpar, o número original
deve ser exibido na tela.
*/

#include <stdio.h>

int main() {
    int a, b;
    
    printf("Digite o valor de A (positivo): ");
    if (scanf("%d", &a) != 1 || a <= 0) {
        printf("Entrada invalida.\n");
        return 1;
    }
    
    printf("Digite o valor de B (positivo e maior que A): ");
    if (scanf("%d", &b) != 1 || b <= a) {
        printf("Entrada invalida.\n");
        return 1;
    }

    for (int i = a; i <= b; i++) {
        int div2 = (i % 2 == 0);
        int div7 = (i % 7 == 0);
        
        if ((div2 || div7) && !(div2 && div7)) {
            int temp = i;
            long long multiplicacao = 1;
            
            if (temp == 0) {
                multiplicacao = 0;
            } else {
                while (temp > 0) {
                    multiplicacao *= (temp % 10);
                    temp /= 10;
                }
            }
            
            if (multiplicacao % 2 != 0) {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}
