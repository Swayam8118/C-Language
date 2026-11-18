#include<stdio.h>
int main()
{
    //Calculate net sales where net sales = gross sales – 10% discount of gross sales.

    float g,d,n;

    printf("Enter gross sales: ");
    scanf("%f",&g);

    d = 0.10 * g; // Discount is 10% of gross sales
    n = g - d; // Net sales calculation

    printf("Net sales is: %.2f\n",n);

   


    return 0;
}