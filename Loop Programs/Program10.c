#include<stdio.h>
int main()
{
    //Print factorial of a given no.  e.g. 5! = 5*4*3*2*1 = 120.
    int n, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    printf("Factorial of %d = %d", n, factorial);
    return 0;
}