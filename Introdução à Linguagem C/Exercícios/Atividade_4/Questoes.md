# 1
- Uma matriz em C é uma variável capaz de armazenar diversos valores, sendo organizada em linhs e colunas.

# 2
- int dados[3][4]

# 3
- Número de posições = linhas * colunas = 3 * 4     ->      12 posições
```c
[0][0] [0][1] [0][2] [0][3] 
[1][0] [1][1] [1][2] [1][3]
[2][0] [2][1] [2][2] [2][3]
```

# 4
```c
int [2][3] = {
    {10, 20, 30}
    {40, 50, 60}
}
```

# 5
- [2] = número de linhas
- [1] = número de colunas

# 6
```
1 2 3
4 5 6
```

# 7
|  l  |  c  |  m[l][c]  |  soma  |
| ---  | --- | --- | --- |
| 0 | 0 | 2 | 2 |
| 0 | 1 | 4 | 6 |
| 1 | 0 | 6 | 12 |
| 1 | 1 | 8 | 20 |

# 8
```c
int m[2][3];
for (int l = 0; l < 2; l++) {
    for (int c = 0; c < 3; c++) {
        scanf("%d ", &m[l][c]);
    }
}
```

# 9
- m[0][2] = 9
- m[1][0] = 2
- m[2][1] = 3

# 10
```
2 10 18
```
- Eles formam uma diagonal pois o índice linha sempre é igual ao índice coluna.

# 11
```c
#include <stdio.h>

int main() {
    int m[3][3];
    int soma = 0;
    for (int l = 0; l < 3; l++) {
        for (int c = 0; c < 3; c++) {
            scanf("%d", &m[l][c]);
            soma += m[l][c];
        }
    }
    printf("%d", soma);
    return 0;
}
```

# 12
```c
#include <stdio.h>

int main() {
    int m[3][4];
    int soma[3] = {0};
    for (int l = 0; l < 3; l++) {
        for (int c = 0; c < 4; c++) {
            scanf("%d", &m[l][c]);
            soma[l] += m[l][c];
        }
    }
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf("%d \n", soma[i]);
    }
    return 0;
}
```

# 13
```c
#include <stdio.h>

int main() {
    int m[3][3];
    int maior = 0, linha, coluna;
    for (int l = 0; l < 3; l++) {
        for (int c = 0; c < 3; c++) {
            scanf("%d", &m[l][c]);
            if (m[l][c] > maior) {
                maior = m[l][c];
                linha = l + 1;
                coluna = c + 1;
            }
        }
    }
    printf("\n");
    printf("O maior valor eh: %d \nEle se encontra na linha %d e na coluna %d", maior, linha, coluna);
    return 0;
}
```

# 14
```c
#include <stdio.h>

int main() {
    float notas[3][2], resultados[3];    

    for (int l = 0; l < 3; l++) {
        for (int c = 0; c < 2; c++) {
            printf("\nInsira a %da nota do aluno %d: ", c+1, l+1);
            scanf("%f", &notas[l][c]);
        }
    }

    resultados[0] = (notas[0][0] + notas[0][1])/2;
    resultados[1] = (notas[1][0] + notas[1][1])/2;
    resultados[2] = (notas[2][0] + notas[2][1])/2;

    for (int i = 0; i < 3; i++) {
        printf("\nMedia do aluno %d: %.2f", i+1, resultados[i]);
        if (resultados[i] < 7) {
            printf("\nO aluno está reprovado!");
        } else {
            printf("\nO aluno foi aprovado!");
        }
    }

    return 0;
}
```

# 15
```c
#include <stdio.h>

int main() {
    float temperaturas[3][4], media_geral, maior = 0;
    int posicao[2], acima_da_media = 0;
    
    for (int l = 0; l < 3; l++) {
        for (int c = 0; c < 4; c++) {
            printf("\nInsira a temperatura da cidade %d no %do dia: ", l+1, c+1);
            scanf("%f", &temperaturas[l][c]);
            media_geral += temperaturas[l][c];
            if (temperaturas[l][c] > maior) {
                maior = temperaturas[l][c];
                posicao[0] = l+1; posicao[1] = c+1;
            }
        }
    }

    media_geral /= 12;

    for (int l = 0; l < 3; l++) {
        for (int c = 0; c < 4; c++) {
            if (temperaturas[l][c] > media_geral);
        }
    }

    for (int m = 0; m < 3; m++) {
        for (int n = 0; n < 4; n++) {
            if (temperaturas[m][n] > media_geral) {
                acima_da_media+=1;
            }
        }
    }

    printf("A media geral foi %.2f \n A maior temperatura foi %.2f e ela aconteceu na cidade %d no %do dia \n Tiveram %d temperaturas acima da media\n", media_geral, maior, posicao[0], posicao[1], acima_da_media);

    return 0;
}
```