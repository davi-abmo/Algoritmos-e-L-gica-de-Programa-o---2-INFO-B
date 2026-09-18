#include <stdio.h>

int main() {
    int idade;

    printf("Insira sua idade: ");
    scanf("%d", &idade);

    if (idade < 0 || idade > 129) {
        printf("Idade invalida!");
    } else if (idade > 0 && idade < 13) {
        printf("Criança!");
    } else if (idade > 12 && idade < 18) {
        printf("Adolescente!");
    } else if (idade > 17 && idade < 60) {
        printf("Adulto!");
    } else if (idade > 60 && idade < 130) {
        printf("Idoso!");
    }

    return 0;
}