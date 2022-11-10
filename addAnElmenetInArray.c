#include <stdio.h>
#define SIZE 10

int main(void)
{
    int a[SIZE], index, j, nInput, posInput, userInput;

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
        printf("In che posizione vuoi inserire il numero: \n");
        scanf("%d", &posInput);
    } while (posInput >= nInput);

    printf("Digita il numero da inserire nel vettore in posizione %d\n", posInput);
    scanf("%d", &userInput);

    // shift array di 1 posizione verso destra

    for (index = (nInput - 1); index >= posInput; index--)
    {
        if ((index + 1) >= SIZE)
            break;

        a[index + 1] = a[index];

        printf("\nSituazione attuale del vettore: \n\n");

        for (j = 0; j <= nInput; j++)
            printf("%d\t", a[j]);
    }

    if (index < posInput)
    {
        printf("\nSituazione attuale del vettore: \n\n");
        a[posInput] = userInput;

        for (j = 0; j <= nInput; j++)
            printf("%d\t", a[j]);
    }
    else
        printf("Il vettore e' pieno.\n");

    return 0;
}