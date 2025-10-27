#include <stdio.h>

int main () {
int numeros[10];
int i, j, repetido;

printf ("Digite 10 numeros :\n ");
    for (i = 0; i < 10; i++) {
        scanf ("%d", &numeros[i]);
    }
    printf ("Numeros que não se repetem:\n");
    for (i = 0; i < 10; i++) {
        repetido = 0;
        
        for (j = 0; j < 10; j++) {
            if (i != j && numeros[i] == numeros[j]) {
                repetido = 1;
                break;
            }
        }
        if (!repetido) {
            printf ("%d\n", numeros[i]);
        }
    }
    return 0;
}