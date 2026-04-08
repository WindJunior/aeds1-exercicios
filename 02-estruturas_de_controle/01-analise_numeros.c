/*
1. Faça um programa que leia 10 valores inteiros, ao final mostre a soma dos
valores, a média dos valores, o maior valor, o segundo maior valor, o
menor valor e o segundo menor valor, mostre também quantos números
eram pares e quantos eram ímpares.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int soma = 0;
  int num;
  int quantidade = 10;
  int maior, menor, segundoMaior, segundoMenor;
  int quantidadePar = 0;
  int quantidadeImpar = 0;

  for (int i = 1; i <= quantidade; i++) {
    printf("Digite o %i o numero: ", i);
    scanf("%i", &num);
    soma = soma + num;

    if (i == 1) {
      maior = num;
      menor = num;
      segundoMaior = num;
      segundoMenor = num;
    } else {
      if (num > maior) {
        segundoMaior = maior;
        maior = num;
      } else if (num > segundoMaior && num != maior) {
        segundoMaior = num;
      } else if (maior == segundoMaior && num < maior) {
        segundoMaior = num;
      }

      if (num < menor) {
        segundoMenor = menor;
        menor = num;
      } else if (num < segundoMenor && num != menor) {
        segundoMenor = num;
      } else if (menor == segundoMenor && num > menor) {
        segundoMenor = num;
      }
    }

    if (num % 2 == 0) {
      quantidadePar++;
    } else {
      quantidadeImpar++;
    }
  }

  printf("A soma dos numeros e: %i\n", soma);
  printf("A media dos numeros e: %.2f\n", (float)soma / quantidade);
  printf("O maior numero e: %i\n", maior);
  printf("O segundo maior numero e: %i\n", segundoMaior);
  printf("O menor numero e: %i\n", menor);
  printf("O segundo menor numero e: %i\n", segundoMenor);
  printf("A quantidade de numeros pares e: %i\n", quantidadePar);
  printf("A quantidade de numeros impares e: %i\n", quantidadeImpar);

  system("pause");
  return 0;
}
