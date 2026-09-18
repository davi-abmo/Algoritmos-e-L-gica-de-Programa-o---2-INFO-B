// Algoritmo que avalia se um número é ou não primo

#include <stdio.h>

int primos(int teste) {
    if (teste <= 0) {
        return 0;
    } else if (teste == 2) {
        return 3;
    } else{
        for (int n = 2; n < teste; n++) {
            if (teste % n == 0) {
                continue;
            } else {
                return 3;
            }
        }
        return 2;
    }
}

int main() {
    system("chcp 65001 > nul"); 

    int n;

    printf("Diga um número e confira se ele é primo: ");
    scanf("%d", &n);

    int conf = primos(n);

    if (conf == 2) {
        printf("Não é primo!");
    } else if (conf == 3) {
        printf("É primo!");
    } else if (conf == 1) {
        printf("O número inserido é 1.");
    } else if (conf == 0) {
        printf("O número inserido é nulo ou negativo!");
    }

    return 0;
}