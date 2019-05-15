#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t_fah, celsius, fahrenheit, t_cel;
    printf("\n\tTEMPERATURE CONVERSION\n");
    printf("\nEnter the temperature in Fahrenheit : ");
    scanf("%f", &t_fah);

    celsius = ((t_fah - 32) * 5) / 9;
    printf("\nTemperature in Celsius : %f\n\n", celsius);

    printf("\nEnter the temperature in Celsius : ");
    scanf("%f", &t_cel);

    fahrenheit = (t_cel * 9/5) + 32;
    printf("\nTemperature in Fahrenheit : %f\n", fahrenheit);
    return 0;
}
