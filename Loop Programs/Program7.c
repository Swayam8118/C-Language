#include <stdio.h>

int main() 
{
    //Print sum of n natural nos.

    int n,sum=0;

    printf("Enter Number : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
        {
            sum=sum+i;
        }    
    printf("Sum = %d",sum);
    return 0;
}