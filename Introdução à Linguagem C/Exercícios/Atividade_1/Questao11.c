// Questão feita no dia 13/07 e terminada às 09:43

#include <stdio.h>

int main() {
    system("chcp 65001 > nul"); 

    float nota, media1 = 7, media2 = 4;

    printf("Insira sua nota: ");
    scanf("%f", &nota);

    if (nota > media1) {
        printf("Aprovado!");
    } else if (nota > media2){
        printf("Recuperação!");
    } else{
        printf("Reprovado!");
    }

    return 0;
}