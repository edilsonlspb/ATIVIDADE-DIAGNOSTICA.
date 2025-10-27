#include <stdio.h>

int main() {
    int numeros[8];
    int i, j, temp;

    printf("Digite 8 numeros inteiros:\n");
    for (i = 0; i < 8; i++) {
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 8 - 1; i++) {
        for (j = 0; j < 8 - i - 1; j++) {
            if (numeros[j] < numeros[j + 1]) {
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < 8; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}