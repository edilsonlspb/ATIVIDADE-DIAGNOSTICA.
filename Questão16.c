#include <stdio.h>

int main() {
    int m[3][3], i, j, somaRef = 0, magico = 1;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);
            if (i == 0) somaRef += m[i][j];
        }

    int diag1 = 0, diag2 = 0;
    for (i = 0; i < 3 && magico; i++) {
        int somaLinha = 0, somaCol = 0;
        for (j = 0; j < 3; j++) {
            somaLinha += m[i][j];
            somaCol += m[j][i];
        }
        diag1 += m[i][i];
        diag2 += m[i][2 - i];

        if (somaLinha != somaRef || somaCol != somaRef)
            magico = 0;
    }
    if (diag1 != somaRef || diag2 != somaRef)
        magico = 0;

    printf(magico ? "Quadrado Magico\n" : "Nao e Quadrado Magico\n");

    return 0;
}
