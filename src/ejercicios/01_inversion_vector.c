/*
 * Ejercicio 1: inversion de vector
 * Leer 6 enteros, guardarlos e imprimirlos en orden inverso.
 */
#include <stdio.h>

int main() {
    int numbers[6];

    printf("Ingrese 6 numeros enteros:\n");
    for (int i = 0; i < 6; i++) {
        printf("Elemento [%d]: ", i);
        scanf("%d", &numbers[i]);
    }

    printf("\n=====Vector en orden inverso=====\n");
    for (int i = 5; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
