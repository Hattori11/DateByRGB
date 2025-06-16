#include <stdio.h>
#include <stdlib.h>

#define DIA_MAX 31
#define MES_MAX 12
#define ANO_MAX 2025

// Função conversora
int converteRGB(int dia, int mes, int ano, int* R, int* G, int* B) {
    *R = (dia * 255) / DIA_MAX;
    *G = (mes * 255) / MES_MAX;
    *B = (ano * 255) / ANO_MAX;
    return 0;
}

int main(){
    int ano = 0, mes = 0, dia = 0;
    int R = 0, G = 0, B = 0;

    printf("Convertendo data em cor RGB\n");
    printf("---------------------------\n");

    // Loops para evitar valores inválidos
    do {
        printf("Digite o dia: ");
        scanf("%d", &dia);
        if (dia < 1 || dia > 31) {
            printf("⨻ Erro! Digite um dia válido.\n");
        }
    } while (dia < 1 || dia > 31);

    do {
        printf("Digite o mês: ");
        scanf("%d", &mes);
        if (mes < 1 || mes > 12) {
            printf("⨻ Erro! Digite um mês válido.\n");
        }
    } while (mes < 1 || mes > 12);

    do {
        printf("Digite o ano: ");
        scanf("%d", &ano);
        if (ano < 1 || ano > 2025) {
            printf("⨻ Erro! Digite um ano válido.\n");
        }
    } while (ano < 1 || ano > 2025);

    converteRGB(dia, mes, ano, &R, &G, &B); // Conversão

    printf("\nData: %d/%d/%d - Cor: RED: %d GREEN: %d BLUE: %d\n", dia, mes, ano, R, G, B);
    return 0;
}
