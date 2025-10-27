#include <stdio.h>
#include <string.h>

int main() {
    char palavra1[50];
    char palavra2[50];
    int resultado;

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);
    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    resultado = strcmp(palavra1, palavra2);

    if (resultado == 0) {
        printf("Palavras iguais\n");
    } else {
        printf("Palavras diferentes\n");
    }

    return 0;
}