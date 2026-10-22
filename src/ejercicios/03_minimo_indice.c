/*
 * Ejercicio 3: minimo y su indice
 * Arreglo de 10 floats: encontrar el minimo y su posicion.
 */
#include <stdio.h>

int main() {
    float values[10];
    int minIndex = 0;

    printf("Ingrese 10 numeros flotantes:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento [%d]: ", i);
        scanf("%f", &values[i]);
    }

    for (int i = 1; i < 10; i++) {
        if (values[i] < values[minIndex]) {
            minIndex = i;
        }
    }

    printf("\nValor minimo: %.2f\n", values[minIndex]);
    printf("Indice donde se encuentra: %d\n", minIndex);

    return 0;
}
