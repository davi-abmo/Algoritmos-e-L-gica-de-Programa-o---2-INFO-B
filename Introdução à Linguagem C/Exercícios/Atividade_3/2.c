#include <stdio.h>

int main() {
    int n;
    int n2 = 0;

    do {
        printf("Digite um numero: ");
        scanf("%d", &n);
        n2+=n;
    } while (n != 0);

    printf("A soma eh: %d", n2);

    return 0;
}