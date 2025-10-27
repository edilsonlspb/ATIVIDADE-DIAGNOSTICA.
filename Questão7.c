#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int numeros[50];
    int unicos[50];
    int i, j, repetido;
    int tamanho_unicos = 0;

    srand (time (NULL));

    printf ("NUmeros gerados :\n ");

    for (i = 0; i < 50; i++) {
        numeros[i] = rand() % 100;
        printf ("%d ", numeros[i]);
        if (i % 10 == 9) {
            printf ("\n");
        }
        for (j = 0; j < tamanho_unicos; j++) {
            if (numeros[i] == unicos[j]) {
                repetido = 1;
                break;
            }
        }
        if (!repetido) {
            unicos[tamanho_unicos] = numeros[i];
            tamanho_unicos++;
        }
    }
    printf ("Numeros unicos:\n");
    for (i = 0; i < tamanho_unicos; i++) {
        printf ("%d\n", unicos[i]);
    }
    return 0;
}
    
            
 