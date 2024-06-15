#include <stdio.h>

int main() {
    char cadena[100];
    char *ptr;

    printf("Introduce una cadena de letras: ");
    fgets(cadena, sizeof(cadena), stdin);

    /* Eliminar el car�cter de nueva l�nea si se ingres� */
    if (cadena[strlen(cadena) - 1] == '\n') {
        cadena[strlen(cadena) - 1] = '\0';
    }

    /* Convertir letras min�sculas a may�sculas y viceversa */
    ptr = cadena;
    while (*ptr != '\0') {
        if (*ptr >= 'a' && *ptr <= 'z') {
            *ptr = *ptr - ('a' - 'A'); /* Convierte a may�scula */
        } else if (*ptr >= 'A' && *ptr <= 'Z') {
            *ptr = *ptr + ('a' - 'A'); /* Convierte a min�scula */
        }
        ptr++;
    }

    printf("La cadena convertida es: %s\n", cadena);

    return 0;
}
