#include <stdio.h>

/* Suma pagos.
El programa obtiene la suma de los pagos realizados en el ultimo mes.

PAG y SPA: variables de tipo real.*/

void main(void)/*Declara la función principal main que no toma argumentos y no devuelve un valor. El uso de void main no es estándar en C; lo correcto sería int main(void).*/
{
    /*Comienza el bloque de código principal de la función main.*/
    float PAG, SPA = 0;/*Declara dos variables de tipo float: PAG y SPA.*/
    printf ("Ingrese el primer pago:\t");/*Imprime en la consola el mensaje "Ingrese el primer pago:" para solicitar al usuario que ingrese un pago.*/
    scanf ("%f", &PAG);/*Lee un número de punto flotante (float) desde la entrada estándar (usualmente el teclado) y lo almacena en la variable PAG.*/
    do/*Inicia un bucle do-while. El cuerpo del bucle se ejecutará al menos una vez antes de comprobar la condición.*/
    {
        /*Comienza el bloque de código del bucle do-while.
        */
        SPA = SPA + PAG;/*Suma el valor de PAG a SPA y almacena el resultado en SPA. Esto acumula el total de los pagos.
*/
        printf ("Ingrese el siguente pago  -0 para terminar-:\t ");/*Imprime en la consola el mensaje "Ingrese el siguiente pago -0 para terminar-" para solicitar al usuario que ingrese otro pago o 0 para terminar.*/
        scanf ("%f", &PAG);/**/
    }/*Cierra el bloque de código del bucle do-while.
*/
    while (PAG);/*La condición del bucle do-while. El bucle continúa ejecutándose mientras PAG no sea 0. Si PAG es 0, el bucle termina.*/
    printf ("\nEl total de pagos del mes es: %2.f", SPA);/*Imprime el mensaje "El total de pagos del mes es:" seguido del valor de SPA, que es la suma total de los pagos ingresados, con dos decimales.
*/
}/*Cierra el bloque de código de la función main.
*/
