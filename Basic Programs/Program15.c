#include<stdio.h>
int main()
{
    //Convert Fahrenheit into celcius. C = 5/9 * (F – 32)
    float fahrenheit, celsius;
    printf("Enter Temperature in Fahrenheit : ");
    scanf("%f", &fahrenheit);
    celsius = 5.0/9.0 * (fahrenheit - 32);
    printf("Temperature in Celsius : %0.2f", celsius);

    return 0;
}