#include <stdio.h>

int main() {
    int numeros[10];
    int i;
    int indiceMaior = 0;
    int indiceMenor = 0;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }
    for (i = 1; i < 10; i++) {
        if (numeros[i] > numeros[indiceMaior]) {
            indiceMaior = i;
        }
        if (numeros[i] < numeros[indiceMenor]) {
            indiceMenor = i;
        }
    }

    printf("%d\n", indiceMaior);
    printf("%d\n", indiceMenor);

    return 0;
}