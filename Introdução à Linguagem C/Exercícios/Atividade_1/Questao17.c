// Questão feita no dia 15/07 e terminada às 11:28

#include <stdio.h>

int main() {
    system("chcp 65001 > nul"); 

    int preco, multiplicador = 5, horas;

    printf("Insira o total de horas no estacionamento:");
    scanf("%d", &horas);

    preco = horas * multiplicador;

    printf("Você terá que pagar um total de %d reais", preco);

    return 0;
}