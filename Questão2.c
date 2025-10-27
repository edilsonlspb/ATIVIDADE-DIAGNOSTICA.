#include <stdio.h>

int main () {
    int n1, n2 ;
    printf ("digite dois numeros inteiros: ");
    scanf ("%d %d", &n1, &n2);

    while (n1 != n2) {
        if (n1 < n2) {
            n1++;
            printf ("%d ", n1);
        } else {
            n2++;
            printf ("%d ", n2);
    }
    }
    printf ("\n");
    return 0;
}