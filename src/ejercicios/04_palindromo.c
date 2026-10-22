/*
 * Ejercicio 4: palindromo
 * Leer una palabra y decidir si es palindromo (ej. reconocer).
 */
#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    int isPalindrome = 1;

    printf("Ingrese una palabra (sin espacios): ");
    scanf("%s", word);

    int length = strlen(word);

    for (int i = 0; i < length / 2; i++) {
        if (word[i] != word[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("\n\"%s\" ES un palindromo.\n", word);
    else
        printf("\n\"%s\" NO es un palindromo.\n", word);

    return 0;
}
