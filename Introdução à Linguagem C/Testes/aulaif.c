#include <stdio.h>

int main()
{
    int idade;

    printf("Digite sua idade:");
    scanf("%d", &idade);

    if (idade >= 18 && idade < 60) {
        printf("Maior de idade!");
    } else if (idade >= 60) {
        printf("Idoso!");
    } else {
        printf("Menor de idade!");
    }

    return 0;
}


// DISJUNÇÃO
// ||

// NEGAÇÃO
// !


// adição
// +
// subtração
// -
// multiplicação
// *
// divisão
// /
// resto de divisão
// %