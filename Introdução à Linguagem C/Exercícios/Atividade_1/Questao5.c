// Questão feita no dia 09/07 e terminada às 19:33

#include <stdio.h>

int main() {
    system("chcp 65001 > nul"); 

    float distancia, consumo, m;

    printf("Qual o consumo médio de combustível que teve nessa viagem? Por favor, informe a distância percorrida: ");
    scanf("%f", &distancia);
    printf("Agora informe a quantidade de consumo, em litros: ");
    scanf("%f", &consumo);

    m = distancia/consumo;

    printf("Seu consumo médio foi de %.2f litros por km!", m);

    return 0;
}