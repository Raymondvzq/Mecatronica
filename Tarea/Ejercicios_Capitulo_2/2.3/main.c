#include <stdio.h>
#include <stdio.h>
/* Promedio curso.
El programa, al recibir como dato el promedio de un alumno en un curso
➥universitario, escribe aprobado si su promedio es mayor o igual a 6, o
➥reprobado en caso contrario.
PRO: variable de tipo real. */
void main(void)/*Define la función principal main.*/
{/*Abre el cuerpo de la función main.
*/
float PRO;/*Declara la variable PRO para almacenar el promedio del alumno.*/
printf(“Ingrese el promedio del alumno: “);/*Solicita al usuario que ingrese el promedio del alumno.
*/
scanf(“%f”, &PRO);/*Lee el promedio ingresado por el usuario y lo almacena en PRO.*/
if (PRO >= 6.0)/*Verifica si el promedio es mayor o igual a 6.0.
*/
printf(“\nAprobado”);/*Si el promedio es mayor o igual a 6.0, muestra "Aprobado".
*/
else/*Si el promedio es menor a 6.0, ejecuta el siguiente bloque.*/
printf(“\nReprobado”);/*Muestra "Reprobado" si el promedio es menor a 6.0.
*/
}/*Cierra el cuerpo de la función main.*/
