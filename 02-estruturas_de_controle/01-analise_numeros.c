/*
1. Faça um programa que leia 10 valores inteiros, ao final mostre a soma dos
valores, a média dos valores, o maior valor, o segundo maior valor, o
menor valor e o segundo menor valor, mostre também quantos números
eram pares e quantos eram ímpares.
*/

#include <stdio.h>
#include <limits.h>

int main() {
  int soma = 0;
  int num;
  int quantidade = 10;
  int maior = INT_MIN;
  int menor = INT_MAX;
  int segundoMaior = INT_MIN;
  int segundoMenor = INT_MAX;
  int quantidadePar = 0;
  int quantidadeImpar = 0;

  for (int i = 1; i <= quantidade; i++) {
    printf("Digite o %i o numero: ", i);
    if (scanf("%i", &num) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }
    soma += num;

    if (num > maior) {
      segundoMaior = maior;
      maior = num;
    } else if (num > segundoMaior && num != maior) {
      segundoMaior = num;
    }

    if (num < menor) {
      segundoMenor = menor;
      menor = num;
    } else if (num < segundoMenor && num != menor) {
      segundoMenor = num;
    }

    if (num % 2 == 0) {
      quantidadePar++;
    } else {
      quantidadeImpar++;
    }
  }

  printf("A soma dos numeros e: %i\n", soma);
  if (quantidade > 0) {
      printf("A media dos numeros e: %.2f\n", (float)soma / quantidade);
  }
  printf("O maior numero e: %i\n", maior);
  if (segundoMaior != INT_MIN) {
      printf("O segundo maior numero e: %i\n", segundoMaior);
  } else {
      printf("Nao ha segundo maior numero distinto.\n");
  }
  printf("O menor numero e: %i\n", menor);
  if (segundoMenor != INT_MAX) {
      printf("O segundo menor numero e: %i\n", segundoMenor);
  } else {
      printf("Nao ha segundo menor numero distinto.\n");
  }
  printf("A quantidade de numeros pares e: %i\n", quantidadePar);
  printf("A quantidade de numeros impares e: %i\n", quantidadeImpar);

  return 0;
}
