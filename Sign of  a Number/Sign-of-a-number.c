#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("\n\tSIGN OF A NUMBER\n");
    printf("\nEnter the number : [ Ignore zero as it is neither positive nor negative ]\n\n");
    scanf("%d",&number);

    if(number>0)
    {
        printf("\nThe entered number is a POSITIVE number.");
    }
    else{
        printf("\nThe entered number is a NEGATIVE number.");
    }
    printf("\n");
    return 0;
}
