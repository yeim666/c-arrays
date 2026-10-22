#include <stdio.h>
#include <ctype.h>  // tolower()

int main(void) {
    char texto[100];
    int i = 0, vocales = 0;

    printf("Ingrese una frase corta: ");
    // fgets limita la lectura al tamano del arreglo
    fgets(texto, sizeof(texto), stdin);

    // Recorre hasta el fin de cadena o el salto de linea
    while (texto[i] != '\0' && texto[i] != '\n') {
        char c = tolower((unsigned char)texto[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vocales++;
        }
        i++;
    }

    printf("La frase ingresada contiene %d vocales.\n", vocales);

    return 0;
}
