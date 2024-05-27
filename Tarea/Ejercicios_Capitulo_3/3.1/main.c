#include <stdio.h>

/* Nomina.
El programa, al recibir los salarios de 15 profesores, obtiene el total de la nomina de la universidad.

I: variable de tipo entero:
SAL Y NOM: variables de tipo real. */

void main(void)/*Esta línea define la función principal del programa, que es el punto de entrada donde comienza la ejecución.*/
{/*Este símbolo de apertura indica el inicio del bloque de código de la función main.*/
int I;
float SAL, NOM;/*Declara una variable I de tipo entero. Esta variable se utilizará como contador en el bucle for.*/
NOM = 0;/*Inicializa la variable NOM en cero. Esto es necesario para asegurarse de que NOM empieza desde cero antes de acumular los salarios.*/
for (I=1; I<=15; I++)/*Inicia un bucle for que se ejecuta 15 veces. La variable I se inicializa a 1, y el bucle continúa mientras I sea menor o igual a 15. Después de cada iteración, I se incrementa en 1.*/
{
    printf ("\Ingrese el salario del profesor%d:\t", I);/**/
    scanf ("%f", &SAL);/*Lee un número de punto flotante ingresado por el usuario y lo almacena en la variable SAL. %f es el especificador de formato para un número de punto flotante. &SAL es la dirección de la variable SAL, donde scanf almacenará el valor leído.*/
    NOM = NOM + SAL;/*Suma el valor de SAL a NOM y almacena el resultado en NOM. Esto acumula el salario ingresado en la variable NOM.*/
}/*Cierra el bloque del bucle for.*/
printf ("\nEl total de la nomina es: %.2f", NOM);/*Imprime el total de la nómina. \n crea una nueva línea. %.2f es el especificador de formato que imprime un número de punto flotante con dos decimales, reemplazado por el valor de NOM.*/
}/*Cierra el bloque de la función main.*/
