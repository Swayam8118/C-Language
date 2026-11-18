#include<stdio.h>
int main()
{
    //Find out how many prime nos. are there between 1 and 500.

    int i, j, f, count = 0;

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
            count++;
        }
    }
    printf("\nNumber of prime numbers between 1 and 500 is: %d", count);

    return 0;
}