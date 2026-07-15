// Questão feita no dia 15/07 e terminada às 13:30

#include <stdio.h>

int main() {
    system("chcp 65001 > nul"); 

    int valor, notas100, notas50, notas20, notas10;

    printf("Insira a quantidade de dinheiro: ");
    scanf("%d", &valor);

    notas100 = valor / 100;
    valor %= 100;

    notas50 = valor / 50;
    valor %= 50;

    notas20 = valor / 20;
    valor %= 20;

    notas10 = valor / 10;
    valor %= 10;

    printf("\nQuantidade de notas:\n");
    printf("%d nota(s) de R$ 100\n", notas100);
    printf("%d nota(s) de R$ 50\n", notas50);
    printf("%d nota(s) de R$ 20\n", notas20);
    printf("%d nota(s) de R$ 10\n", notas10);

    if (valor > 0) {
        printf("\nUm duende sai de dentro do caixa eletrônico e te entrega os R$ %d restantes em moedas", valor);
    }

    return 0;
}