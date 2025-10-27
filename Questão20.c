#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int i, j;
    int tamanho;
    int palindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tamanho = strlen(palavra);

    for (i = 0, j = tamanho - 1; i < tamanho / 2; i++, j--) {
        if (palavra[i] != palavra[j]) {
            palindromo = 0;
            break;
        }
    }

    if (palindromo) {
        printf("Palindromo\n");
    } else {
        printf("Nao e Palindromo\n");
    }

    return 0;
}