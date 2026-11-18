#include<stdio.h>
int main()
{
    //Print sum of all nos. divisible by 13 in the range of 1 and 100.

    int sum=0;
    for(int i=1;i<=100;i++)
    {
        if(i%13==0)
        {
            sum=sum+i;
        }
    }
    printf("Sum of all numbers divisible by 13 in the range of 1 and 100 is %d",sum);

    return 0;

}