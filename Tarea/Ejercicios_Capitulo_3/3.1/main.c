#include <stdio.h>

/* Nomina.
El programa, al recibir los salarios de 15 profesores, obtiene el total de la nomina de la universidad.

I: variable de tipo entero:
SAL Y NOM: variables de tipo real. */

void main(void)/*Esta l�nea define la funci�n principal del programa, que es el punto de entrada donde comienza la ejecuci�n.*/
{/*Este s�mbolo de apertura indica el inicio del bloque de c�digo de la funci�n main.*/
int I;
float SAL, NOM;/*Declara una variable I de tipo entero. Esta variable se utilizar� como contador en el bucle for.*/
NOM = 0;/*Inicializa la variable NOM en cero. Esto es necesario para asegurarse de que NOM empieza desde cero antes de acumular los salarios.*/
for (I=1; I<=15; I++)/*Inicia un bucle for que se ejecuta 15 veces. La variable I se inicializa a 1, y el bucle contin�a mientras I sea menor o igual a 15. Despu�s de cada iteraci�n, I se incrementa en 1.*/
{
    printf ("\Ingrese el salario del profesor%d:\t", I);/**/
    scanf ("%f", &SAL);/*Lee un n�mero de punto flotante ingresado por el usuario y lo almacena en la variable SAL. %f es el especificador de formato para un n�mero de punto flotante. &SAL es la direcci�n de la variable SAL, donde scanf almacenar� el valor le�do.*/
    NOM = NOM + SAL;/*Suma el valor de SAL a NOM y almacena el resultado en NOM. Esto acumula el salario ingresado en la variable NOM.*/
}/*Cierra el bloque del bucle for.*/
printf ("\nEl total de la nomina es: %.2f", NOM);/*Imprime el total de la n�mina. \n crea una nueva l�nea. %.2f es el especificador de formato que imprime un n�mero de punto flotante con dos decimales, reemplazado por el valor de NOM.*/
}/*Cierra el bloque de la funci�n main.*/
