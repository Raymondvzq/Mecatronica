#include <stdio.h>
#include <math.h>
/* Expresión.
El programa, al recibir como datos tres valores enteros, establece si los
mismos satisfacen una expresión determinada.
R, T y Q: variables de tipo entero.
RES: variable de tipo real. */
void main(void)/*Define la función principal main.
*/
{
    /*Abre el cuerpo de la función main.
    */
    float RES;/*Declara una variable de tipo float llamada RES para almacenar el resultado de la expresión matemática.*/
    int R, T, Q;/*Declara tres variables de tipo int llamadas R, T, y Q para almacenar los valores que ingresará el usuario.*/
    printf("Ingrese los valores de R, T y Q: ");/*Muestra un mensaje solicitando al usuario que ingrese los valores de R, T, y Q.*/
    scanf("%d %d %d", &R, &T, &Q);/*Lee tres valores enteros ingresados por el usuario y los almacena en las variables R, T, y Q.*/
    RES = pow(R, 4) – pow(T, 3) + 4 * pow(Q, 2);/*Calcula el valor de la expresión R^4 - T^3 + 4 * Q^2 usando la función pow para las potencias, y almacena el resultado en RES.*/
    if (RES < 820)/*Comprueba si el valor de RES es menor que 820.
*/
        printf("\nR = %d\tT = %d\t Q = %d", R, T, Q);/*Si la condición anterior se cumple (es decir, si RES es menor que 820), muestra los valores de R, T, y Q.*/
}/*Cierra el cuerpo de la función main.
*/
