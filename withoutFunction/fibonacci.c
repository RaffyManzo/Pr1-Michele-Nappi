#include <stdio.h>

int main(void)
{
    int precedente, successivo, fibonacciOutput = 0, n_esimo, indice;

    precedente = 1;
    successivo = 1;

    for(n_esimo = 5, indice = 0; indice < n_esimo; indice++) {
        fibonacciOutput = precedente + successivo;
        precedente = successivo;
        successivo = fibonacciOutput;

        //printf("Il numero %d della sequuenza e':\t%d\n", indice, fibonacciOutput);
    }

    printf("Il numero %d della sequuenza e':\t%d\n", n_esimo, fibonacciOutput);
}
