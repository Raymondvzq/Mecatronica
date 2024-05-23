#include <stdio.h>
/* Promedio curso.
El programa, al recibir como dato el promedio de un alumno en un curso
➥universitario, escribe aprobado si su promedio es mayor o igual a 6
PRO: variable de tipo real. */
void main(void) /*Declara la función principal del programa. main es el punto de entrada donde la ejecución del programa comienza. void antes de main indica que la función no devuelve ningún valor. void dentro de los paréntesis indica que la función no toma argumentos.*/
{
    float PRO;/*Declara una variable de tipo float llamada PRO. Esta variable se utilizará para almacenar el promedio del alumno que se ingresará.*/
    printf("ingrese el promedio del alumno: ");
    scanf("%f", &PRO);/*Utiliza la función scanf para leer un valor de punto flotante ingresado por el usuario y almacenarlo en la variable PRO. El especificador de formato %f indica que se espera un número de punto flotante. El operador & (ampersand) antes de PRO proporciona la dirección de memoria de PRO donde se almacenará el valor ingresado.*/
    if (PRO >= 6) /*Declara una estructura de control if que evalúa si el valor de PRO es mayor o igual a 6. Si la condición es verdadera, el código dentro del bloque if se ejecuta.*/
        printf("\nAprobado");/*Si la condición en el if es verdadera, esta línea se ejecuta y utiliza printf para imprimir el mensaje "Aprobado" en una nueva línea. El \n es un carácter de escape que representa una nueva línea.*/
}

