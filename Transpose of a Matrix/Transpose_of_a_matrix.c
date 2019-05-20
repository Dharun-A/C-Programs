#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows, columns,i,j;
    printf("\n\tTRANSPOSE OF A MATRIX\n");
    printf("\nEnter the number of rows and columns : ");
    scanf("%d%d",&rows, &columns);
    int arr[rows][columns];
    printf("\nEnter the matrix elements : \n\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nThe matrix is \n\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose of the matrix!\n\n");
    for(i=0;i<columns;i++)
    {
        for(j=0;j<rows;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
