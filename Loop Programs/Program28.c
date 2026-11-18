#include<stdio.h>
int main()
{
    /*  Find out whether a given no. is perfect no. or not. If sum of factors upto 
        half of a given no.=no. itself then no. is perfect no. e.g. 6=1+2+3=6*/

    int n, i, sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1; i<=n/2; i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("%d is a perfect number.", n);
    }
    else
    {
        printf("%d is not a perfect number.", n);
    }
    
    return 0;
}