#include <stdio.h>
#define SIZE 10

int main(void)
{
    int a[SIZE], index, j, nInput, posInput;

    /* 
     * j essenzialmente viene usato solo per mostrare di volta in volta il 
     * vettore come cambia, ai fini dell'esercizio è inutile. 
     */

    // Input utente

    printf("Inserisci il numero di elementi del vettore: \n");
    do
    {
        scanf("%d", &nInput);
    } while (nInput > (SIZE - 1));

    for (index = 0; index < nInput; index++)
    {
        printf("Posizione %d, inserisci: ", (index));
        scanf("%d", &a[index]);
    }

    do
    {
        printf("Elimina il numero in posizione: \n");
        scanf("%d", &posInput);
    } while (posInput >= nInput);

    // shift array di 1 posizione verso destra

    for (index = posInput; index < nInput - 1; index++)
    {

        a[index] = a[index + 1];

        printf("\nSituazione attuale del vettore: \n\n");

        for (j = 0; j < nInput; j++)
            printf("%d\t", a[j]);
    }
    printf("\nSituazione attuale del vettore: \n\n");

    for (j = 0; j < nInput - 1; j++)
        printf("%d\t", a[j]);

    return 0;
}