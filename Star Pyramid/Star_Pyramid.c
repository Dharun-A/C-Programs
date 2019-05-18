#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\tSTAR PYRAMID\n");
    int rows,i,j,k;
    printf("\nEnter the number of rows : ");
    scanf("%d", &rows);
    printf("\n");
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows-i;j++)
        {
            printf("\t");
        }
        for(k=1;k<2*i;k++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

