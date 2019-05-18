#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\tHALF PYRAMID USING NUMBERS\n");
    int rows, i, j;
    printf("\nEnter the number of rows: ");
    scanf("%d", &rows);
    printf("\n");
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
