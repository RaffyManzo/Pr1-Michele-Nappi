#include <stdio.h>
#include <math.h>
#define MAX_BIT_SIZE 8

int main(void) {
    int binaryNumber[MAX_BIT_SIZE] = {0};
    int index, decimalConverted = 0;

    printf("Inserisci il tuo numero in binario(parti dalla meno significativa): \n");
    for(index = 0; index < MAX_BIT_SIZE; index++) {
        //checking input
        do {
            scanf("%d", &binaryNumber[index]);
            if(binaryNumber[index] != 0 && binaryNumber[index] != 1)
                printf("Solo numeri binari\n");

        }while(binaryNumber[index] != 0 && binaryNumber[index] != 1);
    }

    for(index = 0; index < MAX_BIT_SIZE; index++) {
        decimalConverted += binaryNumber[index] * (int)pow(2, index); 
    }

    printf("Il tuo numero convertito in decimale e': %d\n", decimalConverted);
}