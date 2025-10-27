#include <stdio.h> 

int main () { 
    int n, cont = 0;
    printf ("Digite um numero Abençoado: ");
    scanf ("%d" , &n);

    if (n == 0 ) {
        cont = 1;
    
    } else {
        while (n > 0) {
            n = n / 10;
            cont++;
        }
        printf ("O numero tem %d digitos\n", cont);
        return 0;
    }
}