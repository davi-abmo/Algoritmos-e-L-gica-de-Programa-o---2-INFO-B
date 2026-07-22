#include <stdio.h>

int main()
{
    float n, n2 = 8, n3 = 13;

    printf("Digite seu numero da sorte:");
    scanf("%f", &n);

    if (n == n2) {
        printf("É um bom número");
    } else if (n == n3) {
        printf("Fazuely");
    } else {
        printf("É...");
    }

    return 0;
}