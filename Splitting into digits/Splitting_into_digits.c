#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, factor, temp;
    printf("\n\tSPLITTING INTO DIGITS\n");
    printf("\nEnter the number : ");
    scanf("%d", &number);
    temp = number;
    factor = 1;

    while(temp > 0)
    {
        temp = temp/10;
        factor *=10;
    }
    printf("\n");
    while(factor > 1)
    {
        factor = factor/10;
        printf("%d ",number/factor);
        number %= factor;
    }
    printf("\n");
    return 0;
}
