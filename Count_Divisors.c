#include <stdio.h>

int main()
{
    int l, r, k, i,c=0;
    //printf("\n\tCOUNT OF DIVISORS\n");
    //printf("\nEnter the starting, ending limit and number : ");
    scanf("%d%d%d", &l, &r, &k);

    for(i=l;i<=r;i++)
    {
        if(i%k==0)
            c++;
    }
    //printf("\nCount of divisors is\n");
    printf("%d", c);
    //printf("\n");
    return 0;
}
