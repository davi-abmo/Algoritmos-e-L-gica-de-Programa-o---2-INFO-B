// Questão feita no dia 13/07 e terminada às 08:46

#include <stdio.h>

int main() {
    system("chcp 65001 > nul"); 

    int n1, n2;

    printf("Insira o primeiro número: ");
    scanf("%d", &n1);

    printf("Insira o segundo número: ");
    scanf("%d", &n2);

    if (n1 > n2) {
        printf("%d é maior que %d", n1, n2);
    } else {
        printf("%d é maior que %d", n2, n1);
    }

    return 0;
}