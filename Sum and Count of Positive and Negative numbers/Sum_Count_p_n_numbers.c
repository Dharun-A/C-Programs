#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    int cp=0, sp=0, cn=0, sn=0;
    printf("\n\tSUM and COUNT of +ve and -ve NUMBERS\n");
    printf("\nEnter the number of elements : ");
    scanf("%d", &n);
    int array[n];
    printf("\nEnter the elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        if(array[i]>=1)
        {
            cp++;
            sp += array[i];
        }
        else{
            cn++;
            sn += array[i];
        }
    }
    printf("\n\t ----------------------------------------");
    printf("\n\t| Number\t|Positive\t|Negative|");
    printf("\n\t -----------------------------------------");
    printf("\n\t| Sum\t\t|%d\t\t|%d\t |",sp,sn);
    printf("\n\t -----------------------------------------");
    printf("\n\t| Count\t\t|%d\t\t|%d\t |",cp,cn);
    printf("\n\t -----------------------------------------");
    return 0;
}
