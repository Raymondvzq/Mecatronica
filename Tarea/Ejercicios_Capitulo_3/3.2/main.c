#include <stdio.h>

/*Suma positivos.
El programa, al recibir como datos N numeros enteros, obtiene la suma de los enteros positivos.

I, N, NUM, SUM: variables de tipo entero. */

void main(void)/*Define la funci�n principal del programa, que es el punto de entrada donde comienza la ejecuci�n. void antes de main indica que la funci�n no devuelve ning�n valor. void dentro de los par�ntesis indica que no toma argumentos.*/
{/*Este s�mbolo de apertura indica el inicio del bloque de c�digo de la funci�n main.*/
int I, N, NUM, SUM;/*Declara cuatro variables de tipo entero. I se utilizar� como contador en el bucle for, N almacenar� el n�mero de datos a ingresar, NUM almacenar� cada dato ingresado por el usuario, y SUM se utilizar� para acumular la suma de los n�meros positivos.*/
SUM = 0;/*Inicializa la variable SUM en cero. Esto es necesario para asegurarse de que SUM empieza desde cero antes de comenzar a acumular los n�meros positivos.*/
printf("Ingrese el numero de datos:\t");/*Imprime un mensaje en la consola solicitando al usuario que ingrese el n�mero de datos.*/
scanf ("%d", &N);/*Lee un n�mero entero ingresado por el usuario y lo almacena en la variable N. %d es el especificador de formato para un n�mero entero. &N es la direcci�n de la variable N, donde scanf almacenar� el valor le�do.*/
for (I=1; I<=N; I++)/*Inicia un bucle for que se ejecuta N veces. La variable I se inicializa a 1, y el bucle contin�a mientras I sea menor o igual a N. Despu�s de cada iteraci�n, I se incrementa en 1.*/
{/*Este s�mbolo de apertura indica el inicio del bloque de c�digo del bucle for.*/
    printf ("Ingrese el dato n�mero %d:\t", I);/*Imprime un mensaje en la consola solicitando al usuario que ingrese el dato n�mero I.c*/
    scanf("%d", &NUM);/*Lee un n�mero entero ingresado por el usuario y lo almacena en la variable NUM. %d es el especificador de formato para un n�mero entero. &NUM es la direcci�n de la variable NUM, donde scanf almacenar� el valor le�do.*/
    if (NUM = 0)/*Este es un error l�gico. La expresi�n NUM = 0 asigna 0 a NUM en lugar de compararlo con 0. Deber�a ser if (NUM > 0) para verificar si NUM es mayor que 0.*/
        SUM = SUM + NUM;/*Suma el valor de NUM a SUM y almacena el resultado en SUM. Esto acumula los n�meros positivos en la variable SUM.*/
}/*Cierra el bloque del bucle for.*/
printf ("\nLa suma de los numeros positivos es: %d", SUM);/*Imprime la suma de los n�meros positivos acumulados en SUM. \n crea una nueva l�nea. %d es el especificador de formato que se reemplaza por el valor de SUM.*/
}/*Cierra el bloque de la funci�n main.*/
