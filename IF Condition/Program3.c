#include<stdio.h>
int main()
{
    /*3.Find out net salary where net salary = gross salary + allowances – deductions. 
        If gross salary > 10000, allowances are 10%, deductions are 3% 
        If gross salary > 5000, allowances are 7%, deduction are 2%*/

    float g,n,a,d;

    printf("Enter Gross Salary : ");
    scanf("%f",&g);

    if(g>5000)
    {
        if(g>10000)
        {
            a = g*0.10;
            d = g*0.03;
        }
        else
        {
            a = g*0.07;
            d = g*0.02;
        }

    }


    n = g + a - d;

    printf("Net Salary is : %.2f",n);

    return 0;
}