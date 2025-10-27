#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j;
    int maiorLinha;

    printf("Digite os 16 numeros inteiros para a matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        maiorLinha = matriz[i][0];
        for (j = 1; j < 4; j++) {
            if (matriz[i][j] > maiorLinha) {
                maiorLinha = matriz[i][j];
            }
        }
        printf("%d\n", maiorLinha);
    }

    return 0;
}