#include <stdio.h>
#include <string.h>

int main(void) {
    char cadena[] = "Programacion";
    int longitud = (int)strlen(cadena);
    int i;
    char temp;

    printf("Original: %s\n", cadena);

    // Intercambia los extremos hacia el centro (in-place)
    for (i = 0; i < longitud / 2; i++) {
        temp = cadena[i];
        cadena[i] = cadena[longitud - 1 - i];
        cadena[longitud - 1 - i] = temp;
    }

    printf("Invertida: %s\n", cadena);

    return 0;
}
