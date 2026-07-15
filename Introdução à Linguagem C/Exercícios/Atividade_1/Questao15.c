// Questão feita no dia 13/07 e terminada às 12:00

#include <stdio.h>

int main() {
    system("chcp 65001 > nul"); 

    int ano, divisor = 4, confere = 0;

    printf("Diga um ano: ");
    scanf("%d", &ano);

    if (ano % divisor == confere) {
        printf("É bissexto!");
    } else {
        printf("Não é bissexto!");
    }

    return 0;
}