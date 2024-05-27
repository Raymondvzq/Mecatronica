#include <stdio.h>
#include <math.h>

/* Suma cuadros.
El programa, al recibir como dato un grupo de entero positivos, obtiene el cuadrado de los mismos y la suma
correspondiente a dichos cuadros. */

void main(void)/*Define la función principal del programa, que es el punto de entrada donde comienza la ejecución. void antes de main indica que la función no devuelve ningún valor. void dentro de los paréntesis indica que no toma argumentos.*/
{/*Este símbolo de apertura indica el inicio del bloque de código de la función main.*/
int NUM;/*Declara una variable de tipo entero llamada NUM. Esta variable se usará para almacenar el número entero ingresado por el usuario.*/
long CUA, SUC = 0;/*Declara dos variables de tipo long (número entero largo). CUA se usará para almacenar el cuadrado de NUM y SUC se usará para acumular la suma de los cuadrados de los números ingresados. SUC se inicializa en cero.*/
printf ("\nIngrese un numero entero -0 para terminar-:\t");/*Imprime un mensaje en la consola solicitando al usuario que ingrese un número entero. \n crea una nueva línea.*/
scanf ("%d", &NUM);/*Lee un número entero ingresado por el usuario y lo almacena en la variable NUM. %d es el especificador de formato para un número entero. &NUM es la dirección de la variable NUM, donde scanf almacenará el valor leído.*/
while (NUM)/*Inicia un bucle while que se ejecuta mientras NUM sea diferente de cero. En C, cualquier valor distinto de cero se considera verdadero, por lo que el bucle continuará mientras NUM no sea cero.*/
{/*Este símbolo de apertura indica el inicio del bloque de código del bucle while.*/
    CUA = pow (NUM, 2);/*Calcula el cuadrado de NUM usando la función pow de la biblioteca matemática estándar. pow eleva NUM a la potencia de 2. Es importante notar que pow devuelve un valor de tipo double, por lo que se debería realizar una conversión explícita a long. Sin embargo, una forma más eficiente y adecuada para calcular el cuadrado de un número entero en C es simplemente multiplicarlo por sí mismo: CUA = NUM * NUM;.*/
    printf ("%d al cubo es %d", NUM, CUA);/*Imprime el número ingresado y su cuadrado en la consola. Sin embargo, el mensaje tiene un error, ya que debería decir "al cuadrado" en lugar de "al cubo".*/
    SUC = SUC + CUA;/*Suma el valor de CUA (cuadrado de NUM) a SUC y almacena el resultado en SUC. Esto acumula los cuadrados de los números ingresados en la variable SUC.*/
    printf ("\nIngrese un numero entero -0 para determinar-:\t");/*Imprime un mensaje en la consola solicitando al usuario que ingrese otro número entero. \n crea una nueva línea.*/
    scanf ("%d", &NUM);/*Lee otro número entero ingresado por el usuario y lo almacena en la variable NUM. Si NUM es cero, el bucle while terminará.*/
}/*Cierra el bloque del bucle while.*/
printf ("\nLa suma de los cuadros es %1d", SUC);/*Imprime la suma de los cuadrados acumulados en SUC. \n crea una nueva línea. %ld es el especificador de formato correcto para un número largo (long), no %1d.*/
}/*Cierra el bloque de la función main.*/
