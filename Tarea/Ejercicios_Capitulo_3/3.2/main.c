#include <stdio.h>

/*Suma positivos.
El programa, al recibir como datos N numeros enteros, obtiene la suma de los enteros positivos.

I, N, NUM, SUM: variables de tipo entero. */

void main(void)/*Define la función principal del programa, que es el punto de entrada donde comienza la ejecución. void antes de main indica que la función no devuelve ningún valor. void dentro de los paréntesis indica que no toma argumentos.*/
{/*Este símbolo de apertura indica el inicio del bloque de código de la función main.*/
int I, N, NUM, SUM;/*Declara cuatro variables de tipo entero. I se utilizará como contador en el bucle for, N almacenará el número de datos a ingresar, NUM almacenará cada dato ingresado por el usuario, y SUM se utilizará para acumular la suma de los números positivos.*/
SUM = 0;/*Inicializa la variable SUM en cero. Esto es necesario para asegurarse de que SUM empieza desde cero antes de comenzar a acumular los números positivos.*/
printf("Ingrese el numero de datos:\t");/*Imprime un mensaje en la consola solicitando al usuario que ingrese el número de datos.*/
scanf ("%d", &N);/*Lee un número entero ingresado por el usuario y lo almacena en la variable N. %d es el especificador de formato para un número entero. &N es la dirección de la variable N, donde scanf almacenará el valor leído.*/
for (I=1; I<=N; I++)/*Inicia un bucle for que se ejecuta N veces. La variable I se inicializa a 1, y el bucle continúa mientras I sea menor o igual a N. Después de cada iteración, I se incrementa en 1.*/
{/*Este símbolo de apertura indica el inicio del bloque de código del bucle for.*/
    printf ("Ingrese el dato número %d:\t", I);/*Imprime un mensaje en la consola solicitando al usuario que ingrese el dato número I.c*/
    scanf("%d", &NUM);/*Lee un número entero ingresado por el usuario y lo almacena en la variable NUM. %d es el especificador de formato para un número entero. &NUM es la dirección de la variable NUM, donde scanf almacenará el valor leído.*/
    if (NUM = 0)/*Este es un error lógico. La expresión NUM = 0 asigna 0 a NUM en lugar de compararlo con 0. Debería ser if (NUM > 0) para verificar si NUM es mayor que 0.*/
        SUM = SUM + NUM;/*Suma el valor de NUM a SUM y almacena el resultado en SUM. Esto acumula los números positivos en la variable SUM.*/
}/*Cierra el bloque del bucle for.*/
printf ("\nLa suma de los numeros positivos es: %d", SUM);/*Imprime la suma de los números positivos acumulados en SUM. \n crea una nueva línea. %d es el especificador de formato que se reemplaza por el valor de SUM.*/
}/*Cierra el bloque de la función main.*/
