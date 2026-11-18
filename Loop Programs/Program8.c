#include <stdio.h>

int main() 
{
    //Print sum of 1st n odd nos.
    int n,sum=0;

    printf("Enter Number : ");
    scanf("%d",&n);

    for(int i=1;i<=2*n;i=i+2)
        {
            sum=sum+i;
        }

    printf("Sum = %d",sum);
    return 0;
}