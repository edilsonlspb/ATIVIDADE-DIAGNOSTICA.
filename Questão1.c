#include <stdio.h>
#include <string.h>


int main() {
    char palavra[100];
    int vogais = 0, consoantes = 0, i = 0;
    
    printf ("fale me uma palavra: ");
    fgets (palavra, sizeof(palavra), stdin) == NULL; /* Esse fgets, eu não entendi muito bem, add por que pensei em pessoas que tem dois nomes. ( por que o arquivo fica laranja? )*/
    palavra[strcspn(palavra, "\n")] = '\0';

    while (palavra[i] != '\0') {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u' ||
            palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O' || palavra[i] == 'U') {
            vogais++;
        } else {
            consoantes++;
        }
        i++;
    }
    printf ("a palavra %s tem %d vogais e %d consoantes\n", palavra, vogais, consoantes);
    return 0;
}