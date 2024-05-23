#include <stdio.h>
#include <math.h>
/* Funci�n matem�tica.
El programa obtiene el resultado de una funci�n.
OP y T: variables de tipo entero.
RES: variable de tipo real. */
void main(void)/*Define la funci�n principal main.
*/
{/*Abre el cuerpo de la funci�n main.
*/
    int OP, T;/*Declara dos variables enteras: OP para la opci�n de c�lculo y T para el valor entero ingresado.
*/
    float RES;/*Declara una variable de tipo float llamada RES para almacenar el resultado del c�lculo.
*/
    printf("Ingrese la opci�n del c�lculo y el valor entero: ");/*Muestra un mensaje solicitando al usuario que ingrese la opci�n de c�lculo y el valor entero.
*/

    scanf("%d %d", &OP, &T);/*Lee dos valores enteros ingresados por el usuario y los almacena en OP y T.
*/
    switch(OP)/*Eval�a la variable OP y ejecuta el bloque de c�digo correspondiente al caso que coincida con su valor.
*/
    {

    case 1:/*Si OP es 1, calcula T / 5 y almacena el resultado en RES.
*/
        RES = T / 5;/*Si OP es 1, calcula T / 5 y almacena el resultado en RES.
*/
        break;/*Termina la ejecuci�n del caso actual y sale del switch.
*/
    case 2:
        RES = pow(T,T);/*Si OP es 2, calcula T elevado a la potencia de T usando la funci�n pow (definida en math.h) y almacena el resultado en RES.
*/
        /* La funci�n pow est� definida en la biblioteca math.h */
        break;/*Termina la ejecuci�n del caso actual y sale del switch.
*/
    case 3:/*Si OP es 3, contin�a con el siguiente caso (case 4).
*/
    case 4:
        RES = 6 * T/2;/*Si OP es 3 o 4, calcula 6 * T / 2 y almacena el resultado en RES.
*/
        break;/*Termina la ejecuci�n del caso actual y sale del switch.
*/
    default:
        RES = 1;/*Si OP no coincide con ning�n caso anterior, asigna el valor 1 a RES.
*/
        break;/*Termina la ejecuci�n del caso actual y sale del switch.
*/
    }/*Cierra el cuerpo de la funci�n main.
*/
    printf("\nResultado: %7.2f", RES);/*Muestra el resultado almacenado en RES con 2 decimales de precisi�n.
*/
}
