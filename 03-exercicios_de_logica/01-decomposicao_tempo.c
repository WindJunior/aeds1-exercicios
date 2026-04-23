#include <stdio.h>

int main() {
  long long int total_segundos;
  long long int anos, meses, semanas, dias, horas, minutos, segundos;
  long long int resto;

  const int SEG_POR_MIN = 60;
  const int SEG_POR_HORA = 3600;
  const int SEG_POR_DIA = 86400;
  const int SEG_POR_SEMANA = 604800;
  const int SEG_POR_MES = 2592000;
  const long long int SEG_POR_ANO = 31536000;

  printf("Digite o total de segundos: ");
  if (scanf("%lld", &total_segundos) != 1) {
    printf("Entrada inválida.\n");
    return 1;
  }

  if (total_segundos < 0) {
    printf("Por favor, digite um valor positivo.\n");
    return 1;
  }

  anos = total_segundos / SEG_POR_ANO;
  resto = total_segundos % SEG_POR_ANO;

  meses = resto / SEG_POR_MES;
  resto = resto % SEG_POR_MES;

  semanas = resto / SEG_POR_SEMANA;
  resto = resto % SEG_POR_SEMANA;

  dias = resto / SEG_POR_DIA;
  resto = resto % SEG_POR_DIA;

  horas = resto / SEG_POR_HORA;
  resto = resto % SEG_POR_HORA;

  minutos = resto / SEG_POR_MIN;
  segundos = resto % SEG_POR_MIN;

  printf("Tempo decomposto:\n");
  int encontrou_unidade = 0;

  if (anos > 0) {
    printf("%lld Ano(s) ", anos);
    encontrou_unidade = 1;
  }
  if (meses > 0) {
    printf("%lld Mes(es) ", meses);
    encontrou_unidade = 1;
  }
  if (semanas > 0) {
    printf("%lld Semana(s) ", semanas);
    encontrou_unidade = 1;
  }
  if (dias > 0) {
    printf("%lld Dia(s) ", dias);
    encontrou_unidade = 1;
  }
  if (horas > 0) {
    printf("%lld Hora(s) ", horas);
    encontrou_unidade = 1;
  }
  if (minutos > 0) {
    printf("%lld Minuto(s) ", minutos);
    encontrou_unidade = 1;
  }
  if (segundos > 0) {
    printf("%lld Segundo(s) ", segundos);
    encontrou_unidade = 1;
  }

  if (!encontrou_unidade) {
    printf("0 Segundos");
  }

  printf("\n");

  return 0;
}
