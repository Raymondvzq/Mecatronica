#include <stdio.h>
#include <math.h>
/* Función.
El programa, al recibir como dato un valor entero, calcula el resultado de
➥una función.
Y: variable de tipo entero.
X: variable de tipo real. */
void main(void)/*Define la función principal main.
*/
{/*Abre el cuerpo de la función main.
*/
float X;/*Declara una variable de tipo float llamada X para almacenar el resultado de los cálculos.
*/
int Y;/*Declara una variable de tipo int llamada Y para almacenar el valor que ingresará el usuario.*/
printf("Ingrese el valor de Y: ");/*Muestra un mensaje solicitando al usuario que ingrese un valor para Y.
*/
scanf("%d", &Y);/*Lee el valor entero ingresado por el usuario y lo almacena en la variable Y.
*/
if (Y < 0 | | Y > 50)/*Comprueba si el valor de Y es menor que 0 o mayor que 50. La condición usa el operador lógico "or" (||).
*/
X = 0;/*Si la condición anterior se cumple (es decir, si Y es menor que 0 o mayor que 50), asigna 0 a X.
*/
else/*Si Y está entre 0 y 50 (inclusive), comprueba si Y es menor o igual a 10.*/
if (Y <= 10)/**/
X = 4 / Y - Y;/**/
else/**/
if (Y <= 25)/*Si Y es menor o igual a 25, calcula el valor de X usando la expresión Y^3 - 12 (usando la función pow para la potencia).
*/
X = pow(Y, 3) - 12;/*Si Y es menor o igual a 10, calcula el valor de X usando la expresión 4 / Y - Y.*/
else/*Si Y es mayor que 25 pero menor o igual a 50, ejecuta el siguiente bloque.*/
X = pow(Y, 2) + pow(Y, 3) – 18;/*Calcula el valor de X usando la expresión Y^2 + Y^3 - 18 (usando la función pow para las potencias).*/
printf("\n\nY = %d\tX = %8.2f", Y, X);/*Imprime los valores de Y y X con un formato de número de punto flotante con 2 decimales.*/
}/*Cierra el cuerpo de la función main.*/
