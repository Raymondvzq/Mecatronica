#include <stdio.h>

// Función que intercambia los valores de dos variables enteras usando punteros
void trueque(int *x, int *y) {
    int tem;
    tem = *x;
    *x = *y;
    *y = tem;
}

// Función que toma un entero como argumento y devuelve el doble de su valor
int suma(int x) {
    return (x + x);
}

int main(void) {
    int a = 5, b = 10;
    printf("Antes del trueque: a = %d, b = %d\n", a, b);
    trueque(&a, &b);
    printf("Después del trueque: a = %d, b = %d\n", a, b);

    int c = 7;
    printf("La suma de %d consigo mismo es: %d\n", c, suma(c));

    return 0;
}
