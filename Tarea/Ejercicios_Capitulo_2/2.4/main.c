#include <stdio.h>
/* incremento de precio.
El programa, al recibir como dato el precio de un producto, incrementa al
➥mismo 11% si es menor a 1500$ y 8% en caso contrario (mayor o igual).
PRE y NPR: variables de tipo real. */
void main(void)/*void main(void):*/
{/*Abre el cuerpo de la función main.
*/
float PRE, NPR;/*Declara las variables PRE para el precio ingresado y NPR para el nuevo precio calculado.
*/
printf("Ingrese el precio del producto: ");/*Solicita al usuario que ingrese el precio del producto.
*/
scanf("%f", &PRE);/*Lee el precio ingresado y lo almacena en PRE.
*/
if (PRE < 1500)/*Verifica si el precio es menor a 1500.
*/
NPR = PRE * 1.11;/*Si el precio es menor a 1500, calcula el nuevo precio aumentando un 11%.
*/
else/*Si el precio es 1500 o mayor, ejecuta el siguiente bloque.
*/
NPR = PRE * 1.08;/*Calcula el nuevo precio aumentando un 8%.
*/
printf("\nNuevo precio del producto: %8.2f", NPR);/*Muestra el nuevo precio calculado en la pantalla con 2 decimales.
*/
}/*Cierra el cuerpo de la función main.
*/
