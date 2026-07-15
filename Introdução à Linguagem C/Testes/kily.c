#include <stdio.h>

int main() {
    system("chcp 65001 > nul"); 

    int n1, n2;
    int a = 8;
    int b = 14;

    printf("Me diga um número: ");
    scanf("%d", &n1);
    printf("Me diga outro número: ");
    scanf("%d", &n2);
    if (n1 > n2) {
        printf("%d é maior que %d", n1, n2);
    }
    else {
        printf("%d é maior que %d", n2, n1);
    }
    if ((n1 == a && n2 == b) || (n2 == a && n1 == b)) {
        printf("\nIhh botola");
    }

    return 0;
}