#include<stdio.h>
int main()
{
   //Convert dollars into pound where 1 $ = 48 Rs. And 1 pound = 70 Rs
    float dollars, pound;
    printf("Enter Dollars : ");
    scanf("%f",&dollars);
    pound = (dollars * 48) / 70;

    printf("Pound : %0.2f",pound);


   


    return 0;
}