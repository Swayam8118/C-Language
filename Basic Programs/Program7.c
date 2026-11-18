#include<stdio.h>
int main()
{
    //Convert minutes into hours
    float minutes,hours;
    printf("Enter Minutes : ");
    scanf("%f",&minutes);
    hours = minutes / 60;

    printf("Hours : %0.2f",hours);

    return 0;
}