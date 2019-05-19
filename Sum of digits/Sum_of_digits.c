#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\tSUM OF THE DIGITS\n");
    printf("\nEnter the digit : ");
    int digit, sum, r;
    scanf("%d", &digit);
    sum = 0;
    while (digit > 0)
    {
        r = digit % 10;
        digit = digit / 10;
        sum = sum + r;
    }
    printf("\nSum of the digits is %d\n",sum);
    return 0;
}
