#include<stdio.h>
int main()
{
    /*	    Calculate net salary where net salary = gross salary + allowance – deduction.
            Allowances are 10% while deductions are 3% of gross salary. */  
    
    float g,a,d,n;
    
    printf("Enter gross salary: ");
    scanf("%f",&g); 

    a = 0.10 * g; // Allowance is 10% of gross salary
    d = 0.03 * g; // Deduction is 3% of gross salary
    n = g + a - d; // Net salary calculation

    printf("Net salary is: %.2f\n",n);

    return 0;
}