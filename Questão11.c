#include <stdio.h>

int main() {
    int vetor[10];
    int contagens[100] = {0};
    int i, valor;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        if (vetor[i] >= 0 && vetor[i] < 100) {
            contagens[vetor[i]]++;
        }
    }

    for (i = 0; i < 10; i++) {
        valor = vetor[i];
        if (valor >= 0 && valor < 100 && contagens[valor] > 0) {
            printf("%d %d\n", valor, contagens[valor]);
            contagens[valor] = 0;
        }
    }

    return 0;
}