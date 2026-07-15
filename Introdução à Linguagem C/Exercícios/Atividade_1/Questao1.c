// Questão feita no dia 09/07 e terminada às 18:34

#include <stdio.h>

int main() {
    system("chcp 65001 > nul");
    // ps: Estarei usando esse comando que achei na internet porque percebi que a linguagem não aceita muito bem a presença de caracteres especiais, então usarei ele para contornar esse problema :)

    float n1, n2, n3, m;

    printf("Olá, Davi! O professor Israel da matéria de Algoritmos e Lógica de Programação gostaria de calcular o seu desempenho médio durante as três primeiras avaliações, porém infelizmente as notas foram perdidas devido a um erro ocorrido no servidor do SUAP (como sempre...). Peço que busque em sua casa as suas notas e insira abaixo para que possamos calcular a sua média.");
    printf("\nInsira sua primeira nota: ");
    scanf("%f", &n1);
    printf("\nInsira sua segunda nota: ");
    scanf("%f", &n2);
    printf("\nInsira sua terceira nota: ");
    scanf("%f", &n3);

    m = (n1 + n2 + n3)/3;

    printf("Obrigado! A sua média é %.1f", m);
    
    return 0;
}