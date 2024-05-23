#include <stdio.h>
/* ventas descendentes.
El programa, al recibir como datos tres valores que representan las ventas
➥de los vendedores de una tienda de discos, escribe las ventas en
➥orden descendente.
P, S y R: variables de tipo real. */
void main(void)/*Define la función principal main.
*/
{
    /*Abre el cuerpo de la función main.
    */
    float P, S, R;/*Declara tres variables de tipo float para almacenar las ventas de tres vendedores: P, S, y R.
*/
    printf("\nIngrese las ventas de los tres vendedores: ");/*Muestra un mensaje solicitando al usuario que ingrese las ventas de los tres vendedores.
*/
    scanf("%f %f %f", &P, &S, &R);/**Lee tres valores de punto flotante ingresados por el usuario y los almacena en las variables P, S, y R.
*/
    if (P > S)/*Comprueba si las ventas de P son mayores que las de S.
*/
        if (P > R)/*Si P es mayor que S, comprueba si P también es mayor que R.
*/
            if (S > R)/*Si P es mayor que R, comprueba si S es mayor que R.*/
                printf("\n\n El orden es P, S y R: %8.2f %8.2f %8.2f", P, S, R);/*Si P es mayor que S y R, y S es mayor que R, muestra P, S y R en ese orden.*/
            else/*Si P es mayor que S pero no mayor que R, ejecuta el siguiente bloque.*/
                printf("\n\n El orden es P, R y S: %8.2f %8.2f %8.2f", P, R, S);/*Muestra R, P y S en ese orden.
*/
        else/*Si P no es mayor que S, ejecuta el siguiente bloque.
*/
            printf("\n\n El orden es R, P y S: %8.2f %8.2f %8.2f", R, P, S);/*Muestra R, P y S en ese orden.
*/
    else/*Si P no es mayor que S, ejecuta el siguiente bloque.
*/
        if (S > R)/*Comprueba si S es mayor que R.
*/
            if (P > R)/*Si S es mayor que R, comprueba si P es mayor que R.
*/
                printf("\n\n El orden es S, P y R: %8.2f %8.2f %8.2f", S, P, R);/*Si S es mayor que R y P es mayor que R, muestra S, P y R en ese orden.
*/
            else/*Si S es mayor que R, pero P no es mayor que R, ejecuta el siguiente bloque.
*/
                printf("\n\n El orden es S, R y P: %8.2f %8.2f %8.2f", S, R, P);/*Muestra S, R y P en ese orden.
*/
        else/*Si S no es mayor que R, ejecuta el siguiente bloque.
*/
            printf("\n\n El orden es R, S y P: %8.2f %8.2f %8.2f", R, S, P);/*Muestra R, S y P en ese orden.
*/
}/*Cierra el cuerpo de la función main.
*/
