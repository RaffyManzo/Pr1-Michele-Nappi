#include <stdio.h>

int main()
{
    int gauss = 0, i = 1;
    float input;

    /*Controlo su input*/
    do
    {
        printf("Inserisci un numero: \t");
        scanf("%f", &input);
    }while (input < 1);

    while (i <= input)
    {
        gauss += i;
        i++;
    }

    printf("L'output sara': %d", gauss);
}