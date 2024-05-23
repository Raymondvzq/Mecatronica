#include <stdio.h>
/* Billete de ferrocarril.
El programa calcula el costo de un billete de ferrocarril teniendo en
cuenta la distancia entre las dos ciudades y el tiempo de permanencia
del pasajero.
DIS y TIE: variables de tipo entero.
BIL: variable de tipo real. */
void main(void)/*Define la función principal main.
*/
{/*Abre el cuerpo de la función main.
*/
int DIS, TIE;/*Declara dos variables de tipo int llamadas DIS y TIE para almacenar la distancia entre ciudades y el tiempo de estancia, respectivamente.*/
float BIL;/*Declara una variable de tipo float llamada BIL para almacenar el costo del billete.*/
printf(“Ingrese la distancia entre ciudades y el tiempo de estancia: “);/*Muestra un mensaje solicitando al usuario que ingrese la distancia entre ciudades y el tiempo de estancia.*/
scanf(“%d %d”, &DIS, &TIE);/*Lee dos valores enteros ingresados por el usuario y los almacena en las variables DIS y TIE.*/
if ((DIS*2 > 500) && (TIE > 10))/*Comprueba si la distancia total del viaje de ida y vuelta (DIS * 2) es mayor que 500 y si el tiempo de estancia (TIE) es mayor que 10 días.*/
BIL = DIS * 2 * 0.19 * 0.8;/*Si la condición anterior se cumple, calcula el costo del billete aplicando un descuento del 20% (multiplicando por 0.8) y lo almacena en BIL.*/
else/*Si la condición del if no se cumple, ejecuta el siguiente bloque.*/
BIL = DIS * 2 * 0.19;/*Calcula el costo del billete sin descuento y lo almacena en BIL.*/
printf(“\n\nCosto del billete: %7.2f”, BIL);/*Imprime el costo del billete con un formato de número de punto flotante con 2 decimales.*/
}/*Cierra el cuerpo de la función main.*/
