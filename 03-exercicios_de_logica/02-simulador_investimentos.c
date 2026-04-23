#include <stdio.h>

int main() {
  int tipo;
  float valor_inicial, saldo_final, lucro;
  int meses;

  printf("Selecione o tipo de investimento:\n");
  printf("1 - Poupança (0,7%% ao mês)\n");
  printf("2 - Renda Fixa (1,2%% ao mês)\n");
  printf("3 - Ações (2,0%% ao mês)\n");
  printf("Opção: ");
  scanf("%d", &tipo);

  printf("Digite o valor inicial a ser investido: R$ ");
  scanf("%f", &valor_inicial);

  if (tipo == 3 && valor_inicial <= 1000.0) {
    printf("Investimento Não Permitido. Para Ações, o valor deve ser superior "
           "a R$ 1.000,00.\n");
    return 0;
  }

  printf("Digite a quantidade de meses da aplicação: ");
  scanf("%d", &meses);

  switch (tipo) {
  case 1:
    lucro = valor_inicial * 0.007 * meses;
    break;
  case 2:
    lucro = valor_inicial * 0.012 * meses;
    break;
  case 3:
    lucro = (valor_inicial * 0.02 * meses) - (20.0 * meses);
    break;
  default:
    printf("Tipo de investimento inválido.\n");
    return 1;
  }

  saldo_final = valor_inicial + lucro;

  printf("\n--- Resultado do Investimento ---\n");
  printf("Lucro obtido: R$ %.2f\n", lucro);
  printf("Saldo final: R$ %.2f\n", saldo_final);

  return 0;
}
