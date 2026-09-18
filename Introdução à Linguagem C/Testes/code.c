#include <stdio.h>

int main() {
    int aprovados = 0;
    float nota;

    for (int i = 1; i<=5; i++) {
        printf("Nota do aluno %d: ", i);
        scanf("%f", &nota);
        while (nota < 0 || nota > 10) {
            printf("Nota inválida: ");
            scanf("%f", &nota);
        }
        if (nota >= 7) {
            aprovados++;
        }
    }
    printf("Aprovados: %d", aprovados);
}