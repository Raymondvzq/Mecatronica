#include <stdio.h>
/* Incremento de salario.
El programa, al recibir como dato el nivel de un profesor, incrementa su
➥salario en función de la tabla 2.3.
NIV: variable de tipo entero.
SAL: variables de tipo real. */
void main(void)/*Define la función principal main que no recibe parámetros y no devuelve un valor.
*/
{/*Abre el cuerpo de la función main.
*/
float SAL;/*Declara una variable de tipo float llamada SAL para almacenar el salario del profesor.
*/
int NIV;/*Declara una variable de tipo int llamada NIV para almacenar el nivel académico del profesor.
*/
printf("Ingrese el nivel academico del profesor: ");/*Muestra un mensaje solicitando al usuario que ingrese el nivel académico del profesor.
*/
scanf("%d", &NIV);/*Lee el nivel académico ingresado por el usuario y lo almacena en la variable NIV.
*/
printf("Ingrese el salario: ");/*Muestra un mensaje solicitando al usuario que ingrese el salario del profesor.
*/
scanf("%f", &SAL);/*Lee el salario ingresado por el usuario y lo almacena en la variable SAL.
*/
switch(NIV)/*Evalúa la variable NIV y ejecuta el bloque de código correspondiente al caso que coincida con su valor.
*/
printf("ingrese el salario: ");/*Muestra un mensaje solicitando al usuario que ingrese el salario del profesor.*/
scanf("%f", &SAL);/*Lee el salario ingresado por el usuario y lo almacena en la variable SAL.
*/
switch(NIV)/*Evalúa la variable NIV y ejecuta el bloque de código correspondiente al caso que coincida con su valor.
*/
{
case 1: SAL = SAL * 1.0035; break;/*Si NIV es 1, multiplica SAL por 1.0035 (incremento del 0.35%) y almacena el resultado en SAL.*/
case 2: SAL = SAL * 1.0041; break;/*Si NIV es 2, multiplica SAL por 1.0041 (incremento del 0.41%) y almacena el resultado en SAL.*/
case 3: SAL = SAL * 1.0048; break;/*Si NIV es 3, multiplica SAL por 1.0048 (incremento del 0.48%) y almacena el resultado en SAL.
*/
case 4: SAL = SAL * 1.0053; break;/*Si NIV es 4, multiplica SAL por 1.0053 (incremento del 0.53%) y almacena el resultado en SAL.*/
}/*Cierra el bloque del switch.
*/
printf("\n\nNivel: %d \tNuevo salario: %8.2f",NIV, SAL);/*Muestra el nivel académico (NIV) y el nuevo salario (SAL) en la pantalla, con el salario formateado a dos decimales.*/
}/*Cierra el cuerpo de la función main.
*/
