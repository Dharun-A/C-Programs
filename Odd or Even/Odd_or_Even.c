#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\tODD or EVEN\n");
    printf("\nEnter the number : ");
    int number;
    scanf("%d",&number);

    if(number%2)
    {
        printf("\nThe given number is an ODD number.");
    }
    else{
        printf("\nThe given number is an EVEN number.");
    }
    printf("\n");
    return 0;
}
