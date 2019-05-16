#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("\n\tSIMPLE CALCULATOR USING SWITCH\n");
    printf("\n1.Addition\t2.Subtraction\t3.Multiplication\n4.Division\t5.Modulus\t6.Square\n7.Cube\t\t8.Square root\t9.Power");
    int in_1, in_2, out, choice;

    printf("\n\nEnter your choice : ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1  :   {
                        printf("\nEnter the two numbers :");
                        scanf("%d%d",&in_1,&in_2);
                        out = in_1 + in_2;
                        printf("\nSum of the two numberrs is %d", out);
                        break;
                    }
        case 2  :   {
                        printf("\nEnter the two numbers :");
                        scanf("%d%d",&in_1,&in_2);
                        out = in_1 - in_2;
                        printf("\nDifference between the two numbers is %d", out);
                        break;
                    }
        case 3  :   {
                        printf("\nEnter the two numbers :");
                        scanf("%d%d",&in_1,&in_2);
                        out = in_1 * in_2;
                        printf("\nProduct of the two numbers is %d", out);
                        break;
                    }
        case 4  :   {
                        printf("\nEnter the two numbers :");
                        scanf("%d%d",&in_1,&in_2);
                        out = in_1 / in_2;
                        printf("\nDivision of the two numbers is %d", out);
                        break;
                    }
        case 5  :   {
                        printf("\nEnter the two numbers :");
                        scanf("%d%d",&in_1,&in_2);
                        out = in_1 % in_2;
                        printf("\nModulus of the two numbers is %d", out);
                        break;
                    }
        case 6  :   {
                        printf("\nEnter the number :");
                        scanf("%d",&in_1);
                        out = in_1 * in_1;
                        printf("\nSquare of the number is %d", out);
                        break;
                    }
        case 7  :   {
                        printf("\nEnter the number :");
                        scanf("%d",&in_1);
                        out = in_1 * in_1 * in_1;
                        printf("\nCube of the number is %d", out);
                        break;
                    }
        case 8  :   {
                        printf("\nEnter the numbers :");
                        scanf("%d",&in_1);
                        out = sqrt(in_1);
                        printf("\nSquare root of the number is %d", out);
                        break;
                    }
        case 9  :   {
                        printf("\nEnter the two numbers : [power, number]");
                        scanf("%d%d",&in_1,&in_2);
                        out = pow(in_1,in_2);
                        printf("\nPower of the number is %d", out);
                        break;
                    }
        default :   printf("\nWrong input!");
                    break;
    }
    printf("\n");
    return 0;
}
