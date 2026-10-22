/*
 * Ejercicio 6: frecuencia de caracteres
 * Contar cuantas veces aparece un caracter en una cadena.
 */
#include <stdio.h>

int main() {
    char text[200];
    char targetChar;
    int counter = 0;

    printf("Ingrese una cadena de texto: ");
    fgets(text, sizeof(text), stdin);

    printf("Ingrese el caracter a buscar: ");
    scanf("%c", &targetChar);

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == targetChar) {
            counter++;
        }
    }

    printf("\nEl caracter '%c' aparece %d vez/veces.\n", targetChar, counter);

    return 0;
}
