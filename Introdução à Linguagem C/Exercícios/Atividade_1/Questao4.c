// Questão feita no dia 09/07 e terminada às 19:28

#include <stdio.h>

int main() {
    system("chcp 65001 > nul"); 

    float salario;

    printf("Olá, caro funcionário! Trazemos uma boa notícia para você.\nVocê receberá um aumento de 10 por cento que será somado a seu salário atual.");
    printf("\nPor favor informe seu salário atual: ");
    scanf("%f", &salario);

    salario *= 1.1;

    printf("Parabéns, seu salário atual é de %.2f reais", salario);

    return 0;
}