// Questão feita no dia 13/07 e terminada às 08:34

#include <stdio.h>

int main() {
    system("chcp 65001 > nul"); 

    int numero, divisor = 2, par = 0;

    printf("Diga um número: ");
    scanf("%d", &numero);

    if (numero % divisor == par) {
        printf("É par!");
    } else {
        printf("É ímpar!");
    }

    return 0;
}