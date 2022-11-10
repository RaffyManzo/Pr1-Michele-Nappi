#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    long int binaryNumber;
    int index, decimalConverted = 0;

    printf("Inserisci il tuo numero in binario: \n");
    scanf("%ld", &binaryNumber);

    for(index = 0; binaryNumber > 0; index++) {
        decimalConverted += (binaryNumber%10) * pow(2, index);
        binaryNumber /= 10;
    }

    printf("Il tuo numero convertito in decimale e': %d\n", decimalConverted);
}