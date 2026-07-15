// Questão feita no dia 13/07 e terminada às 09:38

#include <stdio.h>

int main() {
    system("chcp 65001 > nul"); 

    int idade, maioridade = 18;

    printf("Insira sua idade: ");
    scanf("%d", &idade);

    if (idade >= maioridade) {
        printf("Maior de idade!");
    } else {
        printf("Menor de idade!");
    }

    return 0;
}