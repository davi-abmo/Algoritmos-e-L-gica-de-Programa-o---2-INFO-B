// Questão feita no dia 15/07 e terminada às 11:43

#include <stdio.h>

int main() {
    system("chcp 65001 > nul"); 

    float kwh, valor1 = 0.10, valor2, normal = 100;

    printf("Valor do kWh: 10 centavos\n");
    printf("Insira a quantidade de kWh consumidos: ");
    scanf("%f", &kwh);

    if (kwh > normal) {
        valor2 = (valor1 * kwh) * 1.2;
        printf("O valor será de %.2f reais!", valor2);
    } else {
        valor2 = (valor1 * kwh);
        printf("O valor será de %.2f reais!", valor2);
    }

    return 0;
}