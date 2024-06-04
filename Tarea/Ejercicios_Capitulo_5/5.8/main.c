#include <stdio.h>
#include <math.h>

/* Primos.
El programa almacena en un arreglo unidimensional los primeros 100 números
primos. */
const int TAM = 100;
void Imprime(int *, int); /* Prototipos de funciones. */
void Primo(int, int *);

void main(void)
{
    int P[TAM] = {2, 3};
    int FLA, J = 2, PRI = 5;
    while (J < TAM)
    {
        FLA = 1;
        Primo(PRI, &FLA); /* Se llama a la función que determina si PRI es primo. */
        if (FLA) /* Si FLA es 1, entonces PRI es primo. */
        {
            P[J] = PRI;
            J++;
        }
        PRI += 2; // Incrementa por 2 para verificar solo números impares
    }
    Imprime(P, TAM);
}

void Primo(int A, int *B)
/* Esta función determina si A es primo, en cuyo caso el valor de *B no se altera. */
{
    int DI = 3;
    while (*B && (DI <= sqrt(A)))
    {
        if ((A % DI) == 0)
            *B = 0;
        DI += 2;
    }
}

void Imprime(int Primos[], int T)
/* Esta función imprime el arreglo unidimensional de números primos. */
{
    int I;
    for (I = 0; I < T; I++)
        printf("\nPrimos[%d]: %d", I, Primos[I]);
}
