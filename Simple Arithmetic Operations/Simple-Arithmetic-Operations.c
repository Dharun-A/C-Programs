#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, e, f, g;    //variable definition
    printf("\n\tSIMPLE ARITHMETIC OPERATIONS\t\n");
    printf("\nEnter two numbers : ");
    scanf("%d%d",&a,&b);        //getting input from the user

    c = a + b;    //addition of two numbers
    d = a - b;    //subtraction of two numbers
    e = a * b;    //multiplication of two numbers
    f = a / b;    //division of two numbers
    g = a % b;    //Modulus of two numbers

    // Result in tabular form //
    printf("\nSimple Arithmetic Operations of the given two numbers a:%d b:%d are as follows\n",a,b);
    printf("\n\t ---------------------------------------");
    printf("\n\t|\t Addition  \t|\t %d \t|",c);
    printf("\n\t ---------------------------------------");
    printf("\n\t|\t Difference\t|\t %d \t|",d);
    printf("\n\t ---------------------------------------");
    printf("\n\t|\t Product   \t|\t %d \t|",e);
    printf("\n\t ---------------------------------------");
    printf("\n\t|\t Division  \t|\t %d \t|",f);
    printf("\n\t ---------------------------------------");
    printf("\n\t|\t Modulus   \t|\t %d \t|",g);
    printf("\n\t ---------------------------------------\n");

    return 0;
}
