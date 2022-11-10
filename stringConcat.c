#include <stdio.h>
#include <string.h>
#define MAX 100

int main(void)
{
    char stringa1[MAX / 2], stringa2[MAX / 2], concatenata[MAX] = {""};
    int index, j, dimStr1, dimStr2;

    // Inserimento prima stringa
    do
    {
        strcpy(stringa1, "");
        printf("Inserirsci la prima stringa:\n");
        scanf("%s", stringa1);
        dimStr1 = strlen(stringa1);
    } while (dimStr1 >= MAX/2);

    // Inserimento seconda stringa
    do
    {
        strcpy(stringa2, "");
        printf("Inserirsci la seconda stringa:\n");
        scanf("%s", stringa2);
        dimStr2 = strlen(stringa2);
    } while (dimStr2 >= MAX/2);
    
    strncat(concatenata, stringa1, dimStr1);
    strncat(concatenata, stringa2, dimStr2);
    
    printf("La stringa e' %.*s\n", (dimStr1 + dimStr2), concatenata);
}