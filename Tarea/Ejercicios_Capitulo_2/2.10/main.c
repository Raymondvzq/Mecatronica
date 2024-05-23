#include <stdio.h>
#include <math.h>
/* Par, impar o nulo.
NUM: variable de tipo entero. */
void main(void)/*Define la función principal main.
*/
{
    /*Abre el cuerpo de la función main.
    */
    int NUM;/*Declara una variable de tipo int llamada NUM para almacenar el número que ingresará el usuario.*/
    printf("Ingrese el numero: ");/*Muestra un mensaje solicitando al usuario que ingrese un número.
*/
    scanf("%d", &NUM);/*Lee el valor entero ingresado por el usuario y lo almacena en la variable NUM.
*/
    if (NUM == 0)/*Comprueba si el valor de NUM es igual a 0.
*/
        printf("\nNulo");/*Si la condición anterior se cumple (es decir, si NUM es igual a 0), imprime "Nulo".*/
    else/*Si NUM no es igual a 0, ejecuta el siguiente bloque.
*/
        if (pow (-1, NUM) > 0)/*Calcula (-1)^NUM usando la función pow. Si el resultado es mayor que 0, significa que NUM es par.*/
            printf("\nPar");/*Si la condición anterior se cumple (es decir, si (-1)^NUM es mayor que 0), imprime "Par".
*/
        else/*Si (-1)^NUM no es mayor que 0, ejecuta el siguiente bloque.
*/
            printf("\nImpar");/*Imprime "Impar", ya que NUM es impar.
*/
}/*Cierra el cuerpo de la función main.
*/
