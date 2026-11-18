#include<stdio.h>
int main()
{
    //Find out summation of prime nos. between 1 & 500.

    int i, j, f, sum = 0;

    for(i=2; i<=500; i++)
    {
        f=0;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            sum = sum + i;
        }
    }
    printf("\nSum of prime numbers between 1 and 500 is: %d", sum);

    return 0;
}