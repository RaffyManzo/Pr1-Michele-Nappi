#include <stdio.h>
#include <math.h>

int main(void)
{

    int index, numero, modifiedNum, mod;
    int armstrong = 0;

    printf("Inserisci il numero:\n");
    scanf("%d", &numero);

    for (index = 0, modifiedNum = numero; modifiedNum != 0; ++index)
        modifiedNum /= 10;
    for (modifiedNum = numero; modifiedNum != 0; modifiedNum /= 10)
    {
        mod = modifiedNum % 10;
        printf("Before:%d\n", armstrong);
        armstrong += pow(mod, index);
        printf("After:%d\n", armstrong);
        printf("Potenza sommata intera: %d\n", (int)pow(mod, index));
        printf("Potenza sommata double: %f\n", pow(mod, index));
        printf("######################################################\n");
    }
    if ((armstrong == numero))
        printf("E' un numero di armstrong\n");
    else
        printf("Non e' un numero di armstrong\n");

    return 0;
}