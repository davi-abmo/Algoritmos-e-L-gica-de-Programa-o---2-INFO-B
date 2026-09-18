#include <stdio.h>

int main() {
    long long limite = 1000000000LL; 

    for (long long i = 1; i <= limite; i++) {
        // Exibe apenas a cada 100 milhões para o código rodar rápido
        if (i % 100000000 == 0) {
            printf("Chegou em: %lld\n", i);
        }
    }

    printf("Contagem concluída!\n");
    return 0;
}