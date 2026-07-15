// Questão feita no dia 13/07 e terminada às 08:41

#include <stdio.h>

int main() {
    system("chcp 65001 > nul"); 

    float nota, media = 7;

    printf("Insira sua nota: ");
    scanf("%f", &nota);

    if (nota > media) {
        printf("Aprovado!");
    } else {
        printf("Reprovado!");
    }

    return 0;
}