
#include<stdio.h>
int main()
{   
    //Find out largest and smallest of two values

    int a,b;
    printf("Enter First Number : ");
    scanf("%d",&a);

    printf("Enter Second Number : ");
    scanf("%d",&b);

    if(a>b)
        {
            printf("%d is Largest And %d is Smallest.",a,b);
        }
    else
        {
            printf("%d is Largest And %d is Smallest.",b,a);
        }



    return 0;
}