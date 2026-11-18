#include<stdio.h>
int main()
{
    //Convert Rs. into dollars where 1 $ = 48 Rs
    float rupees,dollars;
    printf("Enter Rupees : ");
    scanf("%f",&rupees);
    dollars=rupees/48;
    printf("Dollars : %0.2f",dollars);

    return 0;
}