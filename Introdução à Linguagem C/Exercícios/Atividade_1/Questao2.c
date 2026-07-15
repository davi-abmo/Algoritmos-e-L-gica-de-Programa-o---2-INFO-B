// Questão feita no dia 09/07 e terminada às 18:41

#include <stdio.h>

int main() {
    system("chcp 65001 > nul");
    
    float l1, l2, a;

    printf("Boa noite! Nós da (sei lá que nome dar pra loja) precisamos calcular a área de um cômodo retangular para sabermos quantas peças serão necessárias, vá e meça a os dois lados diferentes do chão e nos entregue o resultado.");
    printf("\nInsira o primeiro lado:");
    scanf("%f", &l1);
    printf("\nInsira o segundo lado:");
    scanf("%f", &l2);

    a = (l1 + l2)/2;
    
    printf("\nMuito obrigado! Conseguimos calcular e recebemos um resultado de %.2f metros quadrados.\n", a);
    
    return 0;
}