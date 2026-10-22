/*
 * Ejercicio 2: transpuesta
 * Matriz 3x3: calcular su transpuesta y mostrarla formateada.
 */

#include <stdio.h>

int main() {
    int matrix[3][3], transpose[3][3];

    printf("Ingrese los 9 elementos de la matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // transpuesta: intercambiar filas y columnas (tipo: 1,2 -> 2,1)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("\n=====Matriz original=====\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n=====Matriz transpuesta=====\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
