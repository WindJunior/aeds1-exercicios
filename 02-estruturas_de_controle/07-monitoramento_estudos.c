/*
7. Monitoramento de Estudos Semanais
Implemente um programa em linguagem C que registre as horas de estudo
de um aluno durante 4 semanas (28 dias).
• Utilize um laço externo para representar as semanas (1 a 4);
• Utilize um laço interno para representar os 7 dias de cada semana;
• Para cada dia, leia quantas horas o aluno estudou. Se a entrada for -1,
considere que o aluno não estudou naquele dia e ignore esse valor
nas médias.
Ao final, o programa deve:
1. Exibir o total de horas estudadas em cada semana;
2. Calcular a média diária de horas estudadas em cada semana
(considerando apenas os dias com entrada válida);
3. Indicar o dia com maior número de horas de estudo no mês,
mostrando a semana e o dia correspondente;
4. Indicar o dia com menor número de horas de estudo diferente de zero,
também informando a semana e o dia correspondente;
5. Exibir o total geral de horas estudadas no mês.
*/

#include <stdio.h>

int main() {
    int horas_mes = 0;
    int maior_horas = -1;
    int maior_sem = 0, maior_dia = 0;
    
    int menor_horas = -1; 
    int menor_sem = 0, menor_dia = 0;

    for (int semana = 1; semana <= 4; semana++) {
        int horas_semana = 0;
        int dias_estudados = 0;

        for (int dia = 1; dia <= 7; dia++) {
            int horas;
            printf("Semana %d, Dia %d - Horas estudadas (-1 para ignorar): ", semana, dia);
            if (scanf("%d", &horas) != 1) {
                printf("Entrada invalida.\n");
                return 1;
            }

            if (horas == -1) {
                continue;
            }
            
            if (horas < 0) {
                printf("Valor invalido ignorado.\n");
                continue;
            }

            horas_semana += horas;
            horas_mes += horas;
            dias_estudados++;

            if (horas > maior_horas) {
                maior_horas = horas;
                maior_sem = semana;
                maior_dia = dia;
            }

            if (horas > 0) {
                if (menor_horas == -1 || horas < menor_horas) {
                    menor_horas = horas;
                    menor_sem = semana;
                    menor_dia = dia;
                }
            }
        }

        printf("\n--- Resumo da Semana %d ---\n", semana);
        printf("Total de horas na semana: %d\n", horas_semana);
        if (dias_estudados > 0) {
            printf("Media diaria (dias de estudo): %.2f\n", (float)horas_semana / dias_estudados);
        } else {
            printf("Nenhum dia de estudo registrado na semana.\n");
        }
        printf("\n");
    }

    printf("--- Resumo do Mes ---\n");
    printf("Total geral de horas estudadas: %d\n", horas_mes);
    
    if (maior_horas != -1) {
        printf("Dia com maior numero de horas: Semana %d, Dia %d (%d horas)\n", maior_sem, maior_dia, maior_horas);
    } else {
        printf("Nenhum dia com horas foi registrado.\n");
    }

    if (menor_horas != -1) {
        printf("Dia com menor numero de horas (diferente de zero): Semana %d, Dia %d (%d horas)\n", menor_sem, menor_dia, menor_horas);
    } else {
        printf("Nenhum dia com horas maior que zero foi registrado.\n");
    }

    return 0;
}
