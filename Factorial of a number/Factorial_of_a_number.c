#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, temp, fact=1;
    printf("\n\tFACTORIAL OF A NUMBER\n");
    printf("\nEnter the number : ");
    scanf("%d", &number);
    temp = number;
    while(temp > 0)
    {
        fact *= temp--;
    }
    printf("\nFactorial of %d is %d\n",number, fact);
    return 0;
}
