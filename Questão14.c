#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j;
    int somaDiagonal = 0;

    printf("Digite os 16 numeros inteiros para a matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        somaDiagonal += matriz[i][i];
    }

    printf("%d\n", somaDiagonal);

    return 0;
}