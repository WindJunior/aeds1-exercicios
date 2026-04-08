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
#include <stdlib.h>

int main() {
    int a, b;
    
    printf("Digite o valor de A (positivo): ");
    scanf("%d", &a);
    
    printf("Digite o valor de B (positivo e maior que A): ");
    scanf("%d", &b);

    if (a < b) {
        int encontrou = 0;
        for (int i = a; i <= b; i++) {
            
            if ((i % 2 == 0 && i % 7 != 0) || (i % 2 != 0 && i % 7 == 0)) {
                int temp = i;
                long long multiplicacao = 1;
                
                if (temp == 0) {
                    multiplicacao = 0;
                } else {
                    while (temp > 0) {
                        multiplicacao = multiplicacao * (temp % 10);
                        temp = temp / 10;
                    }
                }
                
                if (multiplicacao % 2 != 0) {
                    printf("%d\n", i);
                    encontrou = 1;
                }
            }
        }
        
        if (encontrou == 0) {
            printf("Nenhum numero encontrado com esses criterios dentro do intervalo.\n");
        }
    } else {
        printf("O valor de A precisa ser menor que B.\n");
    }

    system("pause");
    return 0;
}
