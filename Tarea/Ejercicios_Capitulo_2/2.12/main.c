#include <stdio.h>
#include <math.h>
/* Igualdad de expresiones.
El programa, al recibir como datos T, P y N, comprueba la igualdad de
una expresión determinada.
T, P y N: variables de tipo entero. */
void main(void)/*Define la función principal main.
*/
{/*Abre el cuerpo de la función main*/
int T, P, N;/*Declara tres variables de tipo int llamadas T, P, y N para almacenar los valores que ingresará el usuario.
*/
printf("Ingrese los valores de T, P y N: ");/*Muestra un mensaje solicitando al usuario que ingrese los valores de T, P, y N.*/
scanf("%d %d %d", &T, &P, &N);/*Lee tres valores enteros ingresados por el usuario y los almacena en las variables T, P, y N.*/
if (P != 0)/*Comprueba si el valor de P es diferente de 0 para evitar la división por cero.*/
{/*Abre el bloque de código que se ejecutará si P es diferente de 0.*/
if (pow(T / P, N) == (pow(T, N) / pow(P, N))/*Comprueba si la expresión (T / P)^N es igual a T^N / P^N usando la función pow para calcular las potencias.*/
printf("\nSe comprueba la igualdad");/*Si la condición anterior se cumple (es decir, si las dos expresiones son iguales), imprime "Se comprueba la igualdad".*/
else/*Si la condición del if no se cumple, ejecuta el siguiente bloque.*/
printf("\nNo se comprueba la igualdad");/*Si las dos expresiones no son iguales, imprime "No se comprueba la igualdad".
*/
}/*Cierra el bloque de código que se ejecuta si P es diferente de 0.*/
else/*Si P es igual a 0, ejecuta el siguiente bloque.
*/
printf("\nP tiene que ser diferente de cero");/*Imprime "P tiene que ser diferente de cero" para indicar que P no puede ser 0.*/
}/*Cierra el cuerpo de la función main.*/
