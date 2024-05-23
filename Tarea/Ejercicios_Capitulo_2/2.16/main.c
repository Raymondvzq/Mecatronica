# include <stdio.h>
/* Empresa textil.
El programa, al recibir como datos decisivos la categoría y antigüedad de
➥un empleado, determina si el mismo reúne las condiciones establecidas por
➥la empresa para ocupar un nuevo cargo en una sucursal.
CLA, CAT, ANT, RES: variables de tipo entero.
SAL: variable de tipo real. */
void main(void)/*Define la función principal del programa. Esta es la función que se ejecutará cuando el programa inicie.
*/
{
    /*Inicia el bloque de código de la función principal.
*/
    int CLA, CAT, ANT, RES;/*Declara cuatro variables enteras:
*/
    printf("\nIngrese la clave, categoría y antigüedad del trabajador:");/*Imprime en la pantalla un mensaje solicitando al usuario que ingrese la clave, categoría y antigüedad del trabajador.
*/
    scanf("%d %d %d", &CLA, &CAT, &ANT);/*Lee tres valores enteros ingresados por el usuario y los almacena en las variables CLA, CAT y ANT respectivamente.
*/
    switch(CAT)/*Inicia una estructura de control switch que evalúa el valor de CAT.*/
    {
    /*Inicia el bloque de código del switch.*/
    case 3:/*Indica una de las opciones para el valor de CAT. Si CAT es 3, se ejecutará el código siguiente.*/
    case 4:/*Otra opción para CAT. Si CAT es 4, se ejecutará el mismo bloque de código que para CAT igual a 3.*/
        if (ANT >= 5)/*Si ANT (antigüedad) es mayor o igual a 5, ejecuta la siguiente línea.*/
            RES = 1;/*Asigna el valor 1 a la variable RES, indicando que se cumplen las condiciones.*/
        else/*Si ANT es menor que 5, ejecuta la siguiente línea.
*/
            RES = 0;/*Otra opción para el valor de CAT. Si CAT es 2, se ejecutará el siguiente bloque de código.
*/
        break;/*Termina la ejecución de este caso del switch y sale del switch.
*/
    case 2:/*Otra opción para el valor de CAT. Si CAT es 2, se ejecutará el siguiente bloque de código.
*/
        if (ANT >= 7)/*Si ANT (antigüedad) es mayor o igual a 7, ejecuta la siguiente línea.
*/
            RES = 1;/*Asigna el valor 1 a la variable RES.
*/
        else/*Si ANT es menor que 7, ejecuta la siguiente línea.
*/
            RES = 0;/*Asigna el valor 0 a la variable RES.
*/
        break;/*Termina la ejecución de este caso del switch y sale del switch.
*/
    default:/*Caso por defecto que se ejecuta si CAT no coincide con ningún caso especificado (es decir, no es 2, 3 ni 4).
*/
        RES = 0;/*Asigna el valor 0 a la variable RES.
*/
        break;/*Termina la ejecución del default y sale del switch.
*/
    }/*Cierra el bloque de código del switch.
*/
    if (RES)/*Verifica si RES es verdadero (distinto de 0).
*/
        printf("\nEl trabajador con clave %d reúne las condiciones para el
               puesto", CLA);/*Imprime un mensaje indicando que el trabajador cumple con las condiciones, mostrando la clave del trabajador.*/
    else/*Si RES es falso (igual a 0), ejecuta la siguiente línea.
*/
        printf("\nEl trabajador con clave %d no reúne las condiciones para
               el puesto", CLA);
}/*Cierra el bloque de código de la función main.*/
