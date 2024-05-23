#include <stdio.h>
/* Incremento de precio.
El programa, al recibir como dato el precio de un producto importado,
➥incrementa 11% el mismo si éste es inferior a $1,500.
PRE y NPR: variable de tipo real. */
void main(void) /*Define la función principal main que no recibe parámetros y no devuelve un valor.*/
{/*Abre el cuerpo de la función main.*/
float PRE, NPR;/*Declara dos variables de tipo float: PRE para el precio ingresado y NPR para el nuevo precio calculado.*/
printf("ingrese el precio del producto: ");/*Muestra un mensaje en la pantalla solicitando al usuario que ingrese el precio del producto.*/
scanf("%f", &PRE);/*Lee el precio ingresado por el usuario y lo almacena en la variable PRE.*/

if (PRE > 1500)/*Verifica si el precio ingresado (PRE) es mayor a 1500.*/
{/*Abre el bloque de código que se ejecutará si la condición del if es verdadera.*/
NPR = PRE * 1.11;/*Calcula el nuevo precio NPR aumentando PRE en un 11%.*/
printf("\nNuevo precio: %7.2f",NPR);/*Muestra el nuevo precio NPR en la pantalla con 2 decimales de precisión.*/
}/*Cierra el bloque de código del if.*/
}/*Cierra el cuerpo de la función main.*/
