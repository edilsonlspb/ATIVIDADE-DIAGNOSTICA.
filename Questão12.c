#include <stdio.h>

int main() {
    int v1[5];
    int v2[5];
    int i;
    int produtoEscalar = 0;

    printf("Digite 5 numeros inteiros para o primeiro vetor:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &v1[i]);
    }
    printf("Digite 5 numeros inteiros para o segundo vetor:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &v2[i]);
    }
    for (i = 0; i < 5; i++) {
        produtoEscalar += v1[i] * v2[i];
    }

    printf("%d\n", produtoEscalar);

    return 0;
}