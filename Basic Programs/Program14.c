#include<stdio.h>
int main()
{
    //Convert celcius into Fahrenheit. F = (9/5 * C) + 32
    float celsius, fahrenheit;
    printf("Enter Temperature in Celsius : ");
    scanf("%f", &celsius);
    fahrenheit = (9.0/5.0 * celsius) + 32;
    printf("Temperature in Fahrenheit : %0.2f", fahrenheit);
    return 0;
}