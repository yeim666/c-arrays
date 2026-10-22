#include <stdio.h>

int main(void) {
    // Dos matrices de 2x2 y una para el resultado
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, 6}, {7, 8}};
    int C[2][2];
    int i, j;

    // Suma elemento a elemento
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Imprime el resultado en formato matricial
    printf("Matriz Resultante (A + B):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
