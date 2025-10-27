#include <stdio.h>
#include <limits.h>

int main() {
    int matriz[3][3];
    int i, j;
    int somaLinha;
    int maiorSoma = INT_MIN;
    int linhaMaiorSoma = -1;

    printf("Digite os 9 numeros inteiros para a matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        somaLinha = 0;
        for (j = 0; j < 3; j++) {
            somaLinha += matriz[i][j];
        }

        if (somaLinha > maiorSoma) {
            maiorSoma = somaLinha;
            linhaMaiorSoma = i;
        }
    }

    printf("%d\n", linhaMaiorSoma);

    return 0;
}