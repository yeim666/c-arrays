/*
 * Ejercicio 5: concatenacion manual
 * Emular strcat con un bucle e indices, sin <string.h>.
 */
#include <stdio.h>

int main() {
    char firstString[200];
    char secondString[100];
    int i = 0, j = 0;

    printf("Ingrese la primera cadena: ");
    fgets(firstString, sizeof(firstString), stdin);
    printf("Ingrese la segunda cadena: ");
    fgets(secondString, sizeof(secondString), stdin);

    // eliminar '\n' de la primera cadena
    while (firstString[i] != '\0') {
        if (firstString[i] == '\n') { firstString[i] = '\0'; break; }
        i++;
    }

    // concatenar manualmente
    while (secondString[j] != '\0' && secondString[j] != '\n') {
        firstString[i] = secondString[j];
        i++;
        j++;
    }
    firstString[i] = '\0';

    printf("\nCadena concatenada: %s\n", firstString);

    return 0;
}
