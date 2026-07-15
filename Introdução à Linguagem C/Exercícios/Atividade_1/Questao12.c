// Questão feita no dia 13/07 e terminada às 09:45

#include <stdio.h>

int main() {
    system("chcp 65001 > nul"); 

    float numero, zero = 0;

    printf("Insira um número: ");
    scanf("%f", &numero);

    if (numero > zero) {
        printf("%.2f é positivo!", numero);
    } else if (numero == zero){
        printf("%.2f é nulo!", numero);
    } else{
        printf("%.2f é negativo!", numero);
    }

    return 0;
}