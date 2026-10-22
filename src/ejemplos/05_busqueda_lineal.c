#include <stdio.h>

int main(void) {
    int numeros[] = {12, 45, 7, 89, 23, 56, 34};
    // Cantidad de elementos = bytes totales / bytes por elemento
    int tamano = sizeof(numeros) / sizeof(numeros[0]);
    int buscado, i, encontrado = 0;

    printf("Arreglo disponible: {12, 45, 7, 89, 23, 56, 34}\n");
    printf("Ingrese el numero a buscar: ");
    scanf("%d", &buscado);

    // Recorre el arreglo y se detiene en la primera coincidencia
    for (i = 0; i < tamano; i++) {
        if (numeros[i] == buscado) {
            printf("Encontrado! El numero %d esta en la posicion [%d].\n", buscado, i);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("El numero %d no se encuentra en el arreglo.\n", buscado);
    }

    return 0;
}
