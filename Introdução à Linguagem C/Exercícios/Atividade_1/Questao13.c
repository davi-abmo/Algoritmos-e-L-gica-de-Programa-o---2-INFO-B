// Questão feita no dia 13/07 e terminada às 11:49

#include <stdio.h>

int main() {
    system("chcp 65001 > nul"); 

    float n1, n2, n3;

    printf("Insira o primeiro número: ");
    scanf("%f", &n1);

    printf("Insira o segundo número: ");
    scanf("%f", &n2);

    printf("Insira o terceiro número: ");
    scanf("%f", &n3);

    if (n1 > n2 && n1 > n3) {
        printf("%.2f é o maior número", n1);
    } else if (n2 > n1 && n2 > n3){
        printf("%.2f é o maior número", n2);
    } else {
        printf("%.2f é o maior número", n3);
    }

    return 0;
}