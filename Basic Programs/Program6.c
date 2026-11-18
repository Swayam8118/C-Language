#include<stdio.h>
int main()
{
    //Convert hours into minutes
    float hours, minutes;

    printf("Enter Hours : ");
    scanf("%f", &hours);

    minutes = hours * 60;

    printf("Minutes : %0.2f", minutes);

    return 0;
}