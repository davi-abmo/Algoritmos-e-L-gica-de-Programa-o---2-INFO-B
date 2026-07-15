// Questão feita no dia 13/07 e terminada às 12:06

#include <stdio.h>

int main() {
    system("chcp 65001 > nul"); 

    float valor, quantidade, price, desconto = 300;

    printf("Digite o valor unitário do produto: ");
    scanf("%f", &valor);

    printf("Digite a quantidade do produto: ");
    scanf("%f", &quantidade);

    price = valor * quantidade;

    if (price >= desconto) {
        price *= 0.95;
        printf("O valor será %.2f", price);
    } else {
        printf("O valor será %.2f", price);
    }

    return 0;
}