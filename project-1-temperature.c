#include <stdio.h>
#include <conio.h>

int main()
{
    float Celsius, Fahrenheit = 0;
    printf("Enter Temp in Celsius C:");
    scanf("%f", &Celsius);
    Fahrenheit = (9 * Celsius) / 5 + 32;
    printf("Temp in Fahrenheit is:%f ", Fahrenheit);
    return 0;
}
