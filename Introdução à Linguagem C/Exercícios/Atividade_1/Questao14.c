// Questão feita no dia 13/07 e terminada às 11:57

#include <stdio.h>

int main() {
    system("chcp 65001 > nul");
    
    float peso, altura, IMC, low = 18.5, mid = 25, high = 30;

    printf("\nInsira o seu peso:");
    scanf("%f", &peso);
    printf("\nInsira a sua altura:");
    scanf("%f", &altura);

    IMC = peso / (altura * altura);

    if (IMC < low) {
        printf("Abaixo do peso!");
    } else if (IMC < mid) {
        printf("Peso normal!");
    } else if (IMC < high) {
        printf("Sobrepeso!");
    } else {
        printf("Obesidade!");
    }
    
    return 0;
}