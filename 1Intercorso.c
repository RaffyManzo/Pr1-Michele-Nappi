#include <stdio.h>
#define MAX 30

int main(void)
{
    int vect1[MAX], vect2[MAX], vect3[MAX], i, j, z, n1, n2, n3 = 0;

    do
    {
        printf("Prima dimensione: ");
        scanf("%d", &n1);
    } while (n1 > MAX);

    do
    {
        printf("Seconda dimensione: ");
        scanf("%d", &n2);
    } while (n2 > MAX);

    printf("Primo vettore, inserimento:\n\n");
    for (i = 0; i < n1; i++)
    {
        printf("Elemento pos %d: ", i);
        scanf("%d", &vect1[i]);
    }

    printf("Secondo vettore, inserimento:\n\n");
    for (j = 0; j < n2; j++)
    {
        printf("Elemento pos %d: ", i);
        scanf("%d", &vect2[j]);
    }

    for (z = 0, i = 0; i < n1; i++)
        for (j = 0; j < n2; j++)
        {
            if (vect1[i] == vect2[j])
            {
                vect3[z] = vect1[i];
                z++;
                n3++;
                break;
            }
        }

    printf("\n\nVettore3:\n");
    for (i = 0; i < n3; i++)
    {
        printf("Elemento pos %d: \t%d\n", i, vect3[i]);
    }

    return 0;
}