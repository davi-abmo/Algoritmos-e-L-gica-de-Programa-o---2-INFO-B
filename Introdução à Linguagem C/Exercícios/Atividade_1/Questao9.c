// Questão feita no dia 13/07 e terminada às 09:35

#include <stdio.h>

int main() {
    system("chcp 65001 > nul"); 

    float produto, valor_minimo = 200;

    printf("Insira o valor do seu produto: ");
    scanf("%f", &produto);

    if (produto >= valor_minimo) {
        produto *= 0.9;
        printf("Seu produto custará %.2f reais", produto);
    } else {
        printf("Seu produto custará %.2f reais", produto);
    }

    return 0;
}