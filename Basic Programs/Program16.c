#include<stdio.h>
int main()
{
    //Calculate interest where I = PRN/100.
    float principal, rate, time, interest;
    printf("Enter Principal Amount : ");
    scanf("%f", &principal);
    printf("Enter Rate of Interest : ");
    scanf("%f", &rate);
    printf("Enter Time (in years) : ");
    scanf("%f", &time);
    interest = (principal * rate * time) / 100;
    printf("Interest : %0.2f", interest);

    return 0;
}