#include <stdio.h>

int main(void) {
    // Vector con las temperaturas registradas
    float temperaturas[5] = {21.5, 24.0, 19.8, 26.2, 22.1};
    float suma = 0.0, maximo = temperaturas[0];
    int i;

    // Recorre el vector acumulando la suma y actualizando el maximo
    for (i = 0; i < 5; i++) {
        suma += temperaturas[i];
        if (temperaturas[i] > maximo) {
            maximo = temperaturas[i];
        }
    }

    printf("Temperatura promedio: %.2f C\n", suma / 5);
    printf("Temperatura maxima registrada: %.2f C\n", maximo);

    return 0;
}
