#include <stdio.h>
#include <string.h>
#define MAX 100

int main(void)
{
    char stringa[MAX];
    int index, dimStr;

    // Inserimento prima stringa
    do
    {
        strcpy(stringa, "");
        printf("Inserirsci la prima stringa:\n");
        scanf("%s", stringa);
        dimStr = strlen(stringa);
    } while (dimStr >= MAX - 1);

    for(index = 0; index < dimStr; index++)
        if(stringa[index] >= 97 && stringa[index] <= 122)
            stringa[index] -= 32;
    
    printf("Output: %.*s", dimStr, stringa);
}