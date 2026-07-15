// Questão feita no dia 15/07 e terminada às 11:32

#include <stdio.h>

int main() {
    system("chcp 65001 > nul"); 

    int idade, low = 16, mid = 18, high = 70;

    printf("Insira sua idade:");
    scanf("%d", &idade);

    if (idade < low) {
        printf("Não pode votar!");
    } else if (idade < mid) {
        printf("Voto facultativo!");
    } else if (idade < high) {
        printf("Voto obrigatório!");
    } else {
        printf("Voto facultativo!");
    }

    return 0;
}