#include<stdio.h>
int main()
{
    //Convert dollars into Rs. Where 1 $ = 48 Rs
    float dollars,rupees;
    printf("Enter Dollars : ");
    scanf("%f",&dollars);  
    rupees=dollars*48;
    printf("Rupees : %0.2f",rupees);


    return 0;
}