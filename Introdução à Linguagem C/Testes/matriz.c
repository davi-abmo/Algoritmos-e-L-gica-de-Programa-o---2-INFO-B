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