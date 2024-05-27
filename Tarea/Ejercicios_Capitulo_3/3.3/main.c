#include <stdio.h>
/* Suma pagos.
El programa, al recibir como datos un conjunto de pagos realizados en el último
➥mes, obtiene la suma de los mismos.
PAG y SPA: variables de tipo real. */
void main(void)/*Define la función principal del programa, que es el punto de entrada donde comienza la ejecución. void antes de main indica que la función no devuelve ningún valor. void dentro de los paréntesis indica que no toma argumentos.*/
{/*Este símbolo de apertura indica el inicio del bloque de código de la función main.*/
float PAG, SPA;/*Declara dos variables de tipo float (número de punto flotante). PAG se usará para almacenar el pago ingresado por el usuario y SPA se usará para acumular el total de todos los pagos.*/
SPA = 0;/*Inicializa la variable SPA en cero. Esto es necesario para asegurarse de que SPA comienza desde cero antes de acumular los pagos.*/
printf("Ingrese el primer pago:\t");/*Imprime un mensaje en la consola solicitando al usuario que ingrese el primer pago.c*/
scanf("%f", &PAG);/*Lee un número de punto flotante ingresado por el usuario y lo almacena en la variable PAG. %f es el especificador de formato para un número de punto flotante. &PAG es la dirección de la variable PAG, donde scanf almacenará el valor leído.*/
while (PAG)/*Inicia un bucle while que se ejecuta mientras PAG sea diferente de cero. En C, cualquier valor distinto de cero se considera verdadero, por lo que el bucle continuará mientras PAG no sea cero.*/
/* Observa que la condición es verdadera mientras el pago es diferente de cero. */
{/*Este símbolo de apertura indica el inicio del bloque de código del bucle while.*/
SPA = SPA + PAG;/*Suma el valor de PAG a SPA y almacena el resultado en SPA. Esto acumula el pago ingresado en la variable SPA.*/
printf("Ingrese el siguiente pago:\t ");/*Imprime un mensaje en la consola solicitando al usuario que ingrese el siguiente pago.*/
scanf("%f", &PAG);/*Lee otro número de punto flotante ingresado por el usuario y lo almacena en la variable PAG. Si PAG es cero, el bucle while terminará.*/
/* Observa que la proposición que modifica la condición es una lectura. */
}/*Cierra el bloque del bucle while.*/
printf("\nEl total de pagos del mes es: %.2f", SPA);/*Imprime el total de todos los pagos acumulados en SPA. \n crea una nueva línea. %.2f es el especificador de formato que imprime un número de punto flotante con dos decimales, reemplazado por el valor de SPA.c*/
}/*Cierra el bloque de la función main.*/
