#include <stdio.h>
#include <math.h>

int main(void)
{
    int resto, a = 150, b = 15;

    if(a < b) {
        resto = a;
        a = b;
        b = resto;
    }

    while (b > 0)
    {
        resto = a % b;
        a = b;
        b = resto;
    }

    printf("output: %d\n", a);

    printf("mcm: %d", 35 * 15 / a);
}