#include <stdio.h>

/* Nomina de profesoras.
El programa, al recibir como datos los salarios de los profesores de una universidad, obtiene la nomina
y el promedio de los salarios.

I: variable de tipo entero.
SAL, NOM, y PRO: variables de tipo real. */

void main(void)/*Declara la función principal main que no toma argumentos y no devuelve un valor. El uso correcto en C estándar sería int main(void).
*/
{/*Comienza el bloque de código principal de la función main.*/
int I = 0;/**/
float SAL, PRO, NOM = 0;/*Declara una variable entera I e inicializa su valor a 0. I se usará como contador para llevar la cuenta del número de salarios ingresados.
*/
printf ("Ingrese le salario del profesor:\t");/*Imprime en la consola el mensaje "Ingrese el salario del profesor:" para solicitar al usuario que ingrese un salario.
*/
scanf ("&f", &SAL);/*Lee un número de punto flotante (float) desde la entrada estándar (usualmente el teclado) y lo almacena en la variable SAL.
*/
do/*Inicia un bucle do-while. El cuerpo del bucle se ejecutará al menos una vez antes de comprobar la condición.
*/
{/*Comienza el bloque de código del bucle do-while.
*/
    NOM = NOM + SAL;/*Suma el valor de SAL a NOM y almacena el resultado en NOM. Esto acumula el total de los salarios ingresados.*/
    I = I + 1;/*Incrementa el contador I en 1. Esto lleva la cuenta del número de salarios ingresados.*/
    printf ("Ingrese el salario del profesor -0 para terminar-:\t");/*Imprime en la consola el mensaje "Ingrese el salario del profesor -0 para terminar-" para solicitar al usuario que ingrese otro salario o 0 para terminar.
*/
    scanf("%f", &SAL);/*Lee otro número de punto flotante desde la entrada estándar y lo almacena en la variable SAL.*/
}/*Cierra el bloque de código del bucle do-while.*/
while (SAL);/*La condición del bucle do-while. El bucle continúa ejecutándose mientras SAL no sea 0. Si SAL es 0, el bucle termina.*/
PRO = NOM / I;/*Calcula el promedio de los salarios dividiendo la suma total de los salarios (NOM) por el número de salarios ingresados (I). El resultado se almacena en PRO.*/
printf ("\nNomina: %.2f \t Promedio de salarios: %.2f", NOM, PRO);/*Imprime en la consola el total de la nómina (NOM) y el promedio de los salarios (PRO), ambos formateados con dos decimales.*/
}/*Cierra el bloque de código de la función main.
*/
