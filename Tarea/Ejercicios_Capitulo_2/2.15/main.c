#include <stdio.h>
/* Spa.
El programa, al recibir como datos el tipo de tratamiento, la edad y el
número de días de internación de un cliente en un spa, calcula el costo
total del tratamiento.
TRA, EDA, DIA: variables de tipo entero.
COS: variable de tipo real. */
void main(void)/*Define la función principal main.
*/
{
    /*Abre el cuerpo de la función main.
    */
    int TRA, EDA, DIA;/*Declara tres variables de tipo int llamadas TRA (tipo de tratamiento), EDA (edad) y DIA (días).
*/
    float COS;/*Declara una variable de tipo float llamada COS para almacenar el costo calculado.
*/
    printf("Ingrese tipo de tratamiento, edad y días: ");/*Muestra un mensaje solicitando al usuario que ingrese el tipo de tratamiento, la edad y el número de días.
*/
    scanf("%d %d %d", &TRA, &EDA, &DIA);/*Lee tres valores enteros ingresados por el usuario y los almacena en las variables TRA, EDA y DIA.
*/
    switch(TRA)/*Inicia una estructura switch para evaluar el valor de TRA.
*/
    {
    /*Abre el cuerpo del switch.
    */
    case 1:
        COS = DIA * 2800;
        break;/*Si TRA es 1, calcula COS como DIA * 2800 y sale del switch.
*/
    case 2:
        COS = DIA * 1950;
        break;/*Si TRA es 2, calcula COS como DIA * 1950 y sale del switch.
*/
    case 3:
        COS = DIA * 2500;
        break;/*Si TRA es 3, calcula COS como DIA * 2500 y sale del switch.
*/
    case 4:
        COS = DIA * 1150;
        break;/*Si TRA es 4, calcula COS como DIA * 1150 y sale del switch.
*/
    default:
        COS = -1;
        break;/*Si TRA no coincide con ninguno de los casos anteriores, asigna -1 a COS y sale del switch.
*/
    }/*Cierra el cuerpo del switch.
*/
    if (COS != -1)/*Comprueba si COS es diferente de -1.
*/
    {
        /*Abre el bloque de código que se ejecutará si COS es diferente de -1.
        */
        if (EDA >= 60)/*Comprueba si la edad (EDA) es mayor o igual a 60.
*/
            COS = COS * 0.75;/*Si la condición anterior se cumple, aplica un descuento del 25% al costo (COS).
*/
        else if (EDA <= 25)/*Si la edad no es mayor o igual a 60, comprueba si es menor o igual a 25.
*/
            COS = COS * 0.85;/*Si la condición anterior se cumple, aplica un descuento del 15% al costo (COS).
*/
        printf("\nClave tratamiento: %d\t Días: %d\t Costo total: %8.2f",TRA, DIA, COS);/*Imprime la clave del tratamiento, los días y el costo total calculado.
*/
    }/*Cierra el bloque de código que se ejecuta si COS es diferente de -1.
*/
    else/*Si COS es igual a -1, ejecuta el siguiente bloque.
*/
        printf("\nLa clave del tratamiento es incorrecta");/*Imprime un mensaje indicando que la clave del tratamiento es incorrecta.
*/
}/*Cierra el cuerpo de la función main.
*/
