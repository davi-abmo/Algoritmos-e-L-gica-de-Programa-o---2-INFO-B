#include <stdio.h>

int main() {
    int n;
    int n2;

    do {
        printf("\n| MENU |\n Digite 1 para calcular o dobro de um numero e 0 para fechar o programa: ");
        scanf("%d", &n);
        if (n == 1) {
            printf("Digite seu numero: ");
            scanf("%d", &n2);
            n2 *= 2;
            printf("\n Seu valor eh: %d", n2);
        }
    } while (n != 0);

    return 0;
}