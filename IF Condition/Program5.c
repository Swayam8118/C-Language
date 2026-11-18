#include<stdio.h>
int main()
{
    /*5.Find out net sales where net sales = gross sales – discount.
        If gross sales > 20000, discount is 15%
        If gross sales > 10000, discount is 10% otherwise 5%*/


    float g,n,d;
    printf("Enter Gross Sales : ");
    scanf("%f",&g);

    if(g>10000)
    {
        if(g>20000)
        {
            d = g*0.15;
        }
        else
        {
            d = g*0.10;
        }
    }
    else
    {
        d = g*0.05;
    }
    

    n = g - d;

    printf("Net Sales is : %.2f",n);
    


    return 0;
}