#include <stdio.h>
#include <math.h>
#define MAX_BIT_SIZE 16

int main (void) {
    int binaryConvertedNumber[MAX_BIT_SIZE] = {0}, i = 0, j, temp;

    int userInput;
    do {
        printf("Inserisci il numero decimale:\n");
        scanf("%d", &userInput);
    }while(log2(userInput + 1) > MAX_BIT_SIZE);

    temp = userInput;

    while(temp >= 1) {
        binaryConvertedNumber[i] = temp%2;
        temp /= 2; 
        i++;
    }

    //inverto l'array
    for(i = 0, j = (int)round(log2(userInput + 1)); i < j; i++, --j) {
        temp = binaryConvertedNumber[j];
        binaryConvertedNumber[j] = binaryConvertedNumber[i];
        binaryConvertedNumber[i] = temp;
    }

    printf("La conversione di %d in binario del tuo numero e': ", userInput);

    for(i = 0; i < (int)log2(userInput + 1) + 1; i++) {
        printf("%d", binaryConvertedNumber[i]);
    }

    return 0;
}