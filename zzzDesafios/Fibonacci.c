// Algoritmo que calcula o N-ésimo termo da sequência de fibonacci

#include <stdio.h>

int loop(int n3) {
    if (n3 <= 0)
    {
        return -1;
    } else if (n3 == 1)
    {
        return 0;
    } else if (n3 == 2) {
        return 1;
    }
    
    int new_n;
    for (int n = 0, m = 1, quant2 = 1; quant2 < n3; quant2++) {
        new_n = n + m;
        n = m;
        m = new_n;
    }
    return new_n;
}

int main() {
    system("chcp 65001 > nul"); 

    int quant, fibonacci;

    printf("|Sequência de Fibonacci|\nInsira a posição do termo a ser exibido: ");
    scanf("%d", &quant);

    fibonacci = loop(quant);

    if (fibonacci == -1) {
        printf("Número inválido!");
    } else {
        printf("O valor é: %d", fibonacci);
    }

    return 0;
}