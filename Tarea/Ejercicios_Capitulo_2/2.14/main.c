#include <stdio.h>
/* Teléfono.
El programa, al recibir como datos la clave de la zona geográfica y el
número de segundos de una llamada telefónica, calcula el costo de la misma.
CLA y TIE: variables de tipo entero.
COS: variable de tipo real. */
void main(void)/*Define la función principal main.
*/
{
    /*Abre el cuerpo de la función main.
    */
    int CLA, TIE;/*Declara dos variables de tipo int llamadas CLA y TIE para almacenar la clave y el tiempo ingresados por el usuario.
*/
    float COS;/*Declara una variable de tipo float llamada COS para almacenar el costo calculado.*/
    printf("Ingresa la clave y el tiempo: ");/*Muestra un mensaje solicitando al usuario que ingrese la clave y el tiempo.*/
    scanf("%d %d", &CLA, &TIE);/*Lee dos valores enteros ingresados por el usuario y los almacena en las variables CLA y TIE.*/
    switch(CLA)/*Inicia una estructura switch para evaluar el valor de CLA.
*/
    {
    /**/
    case 1:
        COS = TIE * 0.13 / 60;
        break;/*Si CLA es 1, calcula COS como TIE * 0.13 / 60 y sale del switch.
*/
    case 2:
        COS = TIE * 0.11 / 60;
        break;/*Si CLA es 2, calcula COS como TIE * 0.11 / 60 y sale del switch.
*/
    case 5:
        COS = TIE * 0.22 / 60;
        break;/*Si CLA es 5, calcula COS como TIE * 0.22 / 60 y sale del switch.
*/
    case 6:
        COS = TIE * 0.19 / 60;
        break;/*Si CLA es 6, calcula COS como TIE * 0.19 / 60 y sale del switch.
*/
    case 7:/*Si CLA es 7, continúa al siguiente caso sin realizar ningún cálculo ni salir del switch.
*/
    case 9:
        COS = TIE * 0.17 / 60;
        break;/*Si CLA es 9 (o 7), calcula COS como TIE * 0.17 / 60 y sale del switch.
*/
    case 10:
        COS = TIE * 0.20 / 60;
        break;/*Si CLA es 10, calcula COS como TIE * 0.20 / 60 y sale del switch.
*/
    case 15:
        COS = TIE * 0.39 / 60;
        break;/*Si CLA es 15, calcula COS como TIE * 0.39 / 60 y sale del switch.
*/
    case 20:
        COS = TIE * 0.28 / 60;
        break;/*Si CLA es 20, calcula COS como TIE * 0.28 / 60 y sale del switch.
*/
    default :
        COS = -1;
        break;/*Si CLA no coincide con ninguno de los casos anteriores, asigna -1 a COS y sale del switch.
*/
    }/**/
    if (COS != -1)/*Comprueba si COS es diferente de -1.
*/
        printf("\n\nClave: %d\tTiempo: %d\tCosto: %6.2f", CLA, TIE, COS);/*Si COS es diferente de -1, imprime la clave, el tiempo y el costo calculado.*/
    else/*Si COS es -1, ejecuta el siguiente bloque.
*/
        printf("\nError en la clave");/*Imprime un mensaje de error indicando que hubo un error en la clave.*/
}/*Cierra el cuerpo de la función main.*/
