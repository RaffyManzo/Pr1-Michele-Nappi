#include <stdio.h>

int checkingIfIsPrime(int numero)
{
    int i;

    for (i = 2; i <= (int)numero / 2; i++)
    {
        if (numero % i) //possiamo omettere == 0
            break;
    }

    if (i > numero / 2)
        return 1;
    else
        return 0;
}

int main(void)
{
    int numero = 0; 

    do
    {
        // checking input
        do
        {
            printf("Inserisci un input intero positivo, -1 per terminare.\n");
            scanf("%d", &numero);
        } while (numero < -1);

        if (checkingIfIsPrime(numero) && numero != 1)
        {
            if (numero == -1)
                break;
            printf("Il numero %d e' primo.\n", numero);
        }
        else
            printf("Il numero %d non e' primo.\n", numero);

    } while (1);
}
