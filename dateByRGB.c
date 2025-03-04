#include <stdio.h>

int main() {

    /*3 variáveis para dia, mês e ano,usar cada uma delas em uma proporção
    achar um valor RGB que será proporcional ao dia, mês e ano digitados pelo usuário
    e informar o valor RGB ao usuário no final*/

    unsigned int day = 0, month = 0, age = 0; // Variáveis de Data
    unsigned int R = 0, G = 0, B = 0; // Variáveis de Cor

        printf("Digite o dia, mês e ano que desejas converter para cor RGB.\n");

        printf("Digite o dia: ");
        scanf_s("%u", &day); // Dia
        printf("Digite o mês: ");
        scanf_s("%u", &month); // Mês
        printf("Digite o ano (completo ex:2020): ");
        scanf_s("%u", &age); // Ano

    // Conversão do Dia
     R = (float)((day * 255) / 30);
    
    // Coversão do Mês
     G = (float)((month * 255) / 12);

    // Conversão do Ano
     B = (float)((age * 255) / 2025);

    (unsigned int) R; // Convertendo para inteiro de novo
    (unsigned int) G; // Convertendo para inteiro de novo
    (unsigned int) B; // Convertendo para inteiro de novo


    // Informando ao usuário as 3 intensidades de cor RGB
        printf("Suas cores RGB são: \n");

        printf("R: %u G: %u B: %u ", R, G, B);
        
    return 0;
}