#include <stdio.h>

int main() {
  int idade_input;
  char sexo;
  float salario;

  float soma_salarios = 0;
  int total_funcionarios = 0;
  int maior_idade = -1, menor_idade = -1;
  int count_perfil = 0;
  int count_mulheres = 0;

  printf("--- Censo de Recursos Humanos ---\n");
  printf("(Digite uma idade negativa para encerrar)\n\n");

  while (1) {
    printf("Digite a idade do funcionário: ");
    scanf("%d", &idade_input);

    if (idade_input < 0) {
      break;
    }

    if (idade_input < 18) {
      printf(
          "Erro: Não é permitido cadastrar funcionários menores de 18 anos.\n");
      continue;
    }

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);

    printf("Digite o salário: R$ ");
    scanf("%f", &salario);
    soma_salarios += salario;
    total_funcionarios++;
    if (maior_idade == -1 || idade_input > maior_idade) {
      maior_idade = idade_input;
    }
    if (menor_idade == -1 || idade_input < menor_idade) {
      menor_idade = idade_input;
    }
    if (salario > 5000.0 && idade_input < 30) {
      count_perfil++;
    }
    if (sexo == 'F' || sexo == 'f') {
      count_mulheres++;
    }

    printf("Funcionário cadastrado com sucesso!\n\n");
  }

  if (total_funcionarios > 0) {
    float media_salarial = soma_salarios / total_funcionarios;
    float percentual_mulheres =
        ((float)count_mulheres / total_funcionarios) * 100;

    printf("\n======= RELATÓRIO FINAL =======\n");
    printf("1. Média Salarial: R$ %.2f\n", media_salarial);
    printf("2. Amplitude Etária: Maior %d anos, Menor %d anos\n", maior_idade,
           menor_idade);
    printf("3. Pessoas com < 30 anos e salário > R$ 5.000,00: %d\n",
           count_perfil);
    printf("4. Percentual de mulheres: %.2f%%\n", percentual_mulheres);
    printf("================================\n");
  } else {
    printf("\nNenhum funcionário foi cadastrado.\n");
  }

  return 0;
}
