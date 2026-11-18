#include<stdio.h>
int main()
{   
    //Find out whether a given no. is divisible by 7 or not.
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n%7==0)
        printf("%d is divisible by 7.",n);
    else
        printf("%d is not divisible by 7.",n);
    return 0;
}