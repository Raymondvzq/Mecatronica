#include <stdio.h>
#include <math.h>

/* Suma cuadros.
El programa, al recibir como dato un grupo de entero positivos, obtiene el cuadrado de los mismos y la suma
correspondiente a dichos cuadros. */

void main(void)/*Define la funci�n principal del programa, que es el punto de entrada donde comienza la ejecuci�n. void antes de main indica que la funci�n no devuelve ning�n valor. void dentro de los par�ntesis indica que no toma argumentos.*/
{/*Este s�mbolo de apertura indica el inicio del bloque de c�digo de la funci�n main.*/
int NUM;/*Declara una variable de tipo entero llamada NUM. Esta variable se usar� para almacenar el n�mero entero ingresado por el usuario.*/
long CUA, SUC = 0;/*Declara dos variables de tipo long (n�mero entero largo). CUA se usar� para almacenar el cuadrado de NUM y SUC se usar� para acumular la suma de los cuadrados de los n�meros ingresados. SUC se inicializa en cero.*/
printf ("\nIngrese un numero entero -0 para terminar-:\t");/*Imprime un mensaje en la consola solicitando al usuario que ingrese un n�mero entero. \n crea una nueva l�nea.*/
scanf ("%d", &NUM);/*Lee un n�mero entero ingresado por el usuario y lo almacena en la variable NUM. %d es el especificador de formato para un n�mero entero. &NUM es la direcci�n de la variable NUM, donde scanf almacenar� el valor le�do.*/
while (NUM)/*Inicia un bucle while que se ejecuta mientras NUM sea diferente de cero. En C, cualquier valor distinto de cero se considera verdadero, por lo que el bucle continuar� mientras NUM no sea cero.*/
{/*Este s�mbolo de apertura indica el inicio del bloque de c�digo del bucle while.*/
    CUA = pow (NUM, 2);/*Calcula el cuadrado de NUM usando la funci�n pow de la biblioteca matem�tica est�ndar. pow eleva NUM a la potencia de 2. Es importante notar que pow devuelve un valor de tipo double, por lo que se deber�a realizar una conversi�n expl�cita a long. Sin embargo, una forma m�s eficiente y adecuada para calcular el cuadrado de un n�mero entero en C es simplemente multiplicarlo por s� mismo: CUA = NUM * NUM;.*/
    printf ("%d al cubo es %d", NUM, CUA);/*Imprime el n�mero ingresado y su cuadrado en la consola. Sin embargo, el mensaje tiene un error, ya que deber�a decir "al cuadrado" en lugar de "al cubo".*/
    SUC = SUC + CUA;/*Suma el valor de CUA (cuadrado de NUM) a SUC y almacena el resultado en SUC. Esto acumula los cuadrados de los n�meros ingresados en la variable SUC.*/
    printf ("\nIngrese un numero entero -0 para determinar-:\t");/*Imprime un mensaje en la consola solicitando al usuario que ingrese otro n�mero entero. \n crea una nueva l�nea.*/
    scanf ("%d", &NUM);/*Lee otro n�mero entero ingresado por el usuario y lo almacena en la variable NUM. Si NUM es cero, el bucle while terminar�.*/
}/*Cierra el bloque del bucle while.*/
printf ("\nLa suma de los cuadros es %1d", SUC);/*Imprime la suma de los cuadrados acumulados en SUC. \n crea una nueva l�nea. %ld es el especificador de formato correcto para un n�mero largo (long), no %1d.*/
}/*Cierra el bloque de la funci�n main.*/
