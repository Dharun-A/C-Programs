#include <stdio.h>
#include <stdlib.h>

int main()
{
    int principle, number_of_years, rate_of_interest, interest;

    printf("\n\tSIMPLE INTEREST CALCULATION\n");
    printf("\nEnter the required fields : [ principle, number of years, rate of interest ]\n\n");
    scanf("%d%d%d",&principle,&number_of_years,&rate_of_interest);

    interest = (principle * number_of_years * rate_of_interest) / 100;

    printf("\nSimple interest = %d\n", interest);

    return 0;
}
