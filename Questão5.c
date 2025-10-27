#include <stdio.h>

int main () {
    int n, cont = 0;
    int inverter;
    printf ("Digite um numero Abençoado: ");
    scanf ("%d" , &n);
    inverter = n;
    if (n == 0 ) {
        cont = 1;
    
    } else {
        while (n > 0) {
            n = n / 10;
            cont++;
        }
        printf ("O numero tem %d digitos\n", cont);
        
        printf ("O numero invertido é: ");
        for (int i = 0; i < cont; i++) {
            int digito = inverter % 10;
            printf ("%d", digito);
            inverter = inverter / 10;
        }
        printf ("\n");
        return 0;
    }
}