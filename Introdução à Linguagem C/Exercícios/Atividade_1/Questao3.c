// Questão feita no dia 09/07 e terminada às 19:21

#include <stdio.h>

int main() {
    system("chcp 65001 > nul"); 

    float C, F;

    printf("\nOlá, meu nome é Daniel, sou um guia de turismo e posso te ajudar com a conversão de celsius para fahrenheit, me informe a temperatura para que eu possa fazer a conversão: ");
    scanf("%f", &C);

    F = C*9/5 + 32;

    printf("\nA temperatura em fahrenheit é %f!", F);

    return 0;
}