#include <stdio.h>
/* Asistentes.
El programa, al recibir como datos la matr�cula, la carrera, el semestre
y el promedio de un alumno de una universidad privada, determina si
�ste puede ser asistente de su carrera.
MAT, CAR y SEM: variables de tipo entero.
PRO: variable de tipo real. */
void main(void)/*Define la funci�n principal main.
*/
{
    /*Abre el cuerpo de la funci�n main.
    */
    int MAT, CAR, SEM;/*Declara tres variables de tipo int para almacenar la matr�cula (MAT), la carrera (CAR) y el semestre (SEM).*/
    float PRO;/*Declara una variable de tipo float para almacenar el promedio (PRO).*/
    printf("Ingrese matricula: ");/*Muestra un mensaje solicitando al usuario que ingrese la matr�cula.*/
    scanf("%d", &MAT);/*Lee el valor entero ingresado por el usuario y lo almacena en la variable MAT.*/
    printf("Ingrese carrera (1-Industrial 2-Telem�tica 3-Computaci�n 4-Mec�nica) : ");/*Muestra un mensaje solicitando al usuario que ingrese el c�digo de la carrera.*/
    scanf("%d", &CAR);/*Lee el valor entero ingresado por el usuario y lo almacena en la variable CAR.*/
    printf("Ingrese semestre: ");/*Muestra un mensaje solicitando al usuario que ingrese el semestre.*/
    scanf("d", &SEM);/*Lee el valor entero ingresado por el usuario y lo almacena en la variable SEM. (Corregido a %d)*/
    printf("Ingrese promedio: ");/*Muestra un mensaje solicitando al usuario que ingrese el promedio.*/
    scanf("%f", &PRO);/*Lee el valor de punto flotante ingresado por el usuario y lo almacena en la variable PRO.*/
    switch(CAR)/*Eval�a la variable CAR y ejecuta el bloque de c�digo correspondiente al caso que coincida con su valor.*/
    {
    /**/
    case 1:
        if (SEM >= 6 && PRO >= 8.5)/*Si CAR es 1 (Industrial), comprueba si SEM es mayor o igual a 6 y PRO es mayor o igual a 8.5.*/
            printf("\n%d %d %5.2f", MAT, CAR, PRO);/*condici�n se cumple, imprime la matr�cula, la carrera y el promedio.*/
        break;/*break;: Termina la ejecuci�n del caso actual y sale del switch.*/
    case 2:
        if (SEM >= 5 && PRO >= 9.0)/*Si CAR es 2 (Telem�tica), comprueba si SEM es mayor o igual a 5 y PRO es mayor o igual a 9.0.*/
            printf("\n%d %d %5.2f", MAT, CAR, PRO);/*condici�n se cumple, imprime la matr�cula, la carrera y el promedio.*/
        break;/*break;: Termina la ejecuci�n del caso actual y sale del switch.*/
    case 3:
        if (SEM >= 6 && PRO >= 8.8)/*Si CAR es 1 (Industrial), comprueba si SEM es mayor o igual a 6 y PRO es mayor o igual a 8.5.*/
            printf("\n%d %d %5.2f", MAT, CAR, PRO);/*Si la condici�n se cumple, imprime la matr�cula, la carrera y el promedio.*/
        break;/*break;: Termina la ejecuci�n del caso actual y sale del switch*/
    case 4:
        if (SEM >= 7 && PRO >= 9.0)/*Si CAR es 2 (Telem�tica), comprueba si SEM es mayor o igual a 5 y PRO es mayor o igual a 9.0.*/
            printf("\n%d %d %5.2f", MAT, CAR, PRO);/*condici�n se cumple, imprime la matr�cula, la carrera y el promedio.
*/
        break;/*Termina la ejecuci�n del caso actual y sale del switch.
*/
    default:
        printf("\n Error en la carrera");/*Si CAR no coincide con ninguno de los casos anteriores, muestra un mensaje de error indicando que hay un error en la carrera.*/
        break;/*break;: Termina la ejecuci�n del caso actual y sale del switch.*/
    }/*Cierra el bloque del switch.
*/
}/*Cierra el cuerpo de la funci�n main.
*/
