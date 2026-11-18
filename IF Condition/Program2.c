#include<stdio.h>
int main()
{
    //Find out largest and smallest of three values.

    int a,b,c;
    printf("Enter First Number : ");
    scanf("%d",&a); 

    printf("Enter Second Number : ");
    scanf("%d",&b);

    printf("Enter Third Number : ");
    scanf("%d",&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("%d is Largest.\n",a);
        }
        else
        {
            printf("%d is Largest.\n",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("%d is Largest.\n",b);
        }
        else
        {
            printf("%d is Largest.\n",c);
        }
    }

    if(a<b)
    {
        if(a<c)
        {
            printf("%d is Smallest.\n",a);
        }
        else
        {
            printf("%d is Smallest.\n",c);
        }
    }
    else
    {
        if(b<c)
        {
            printf("%d is Smallest.\n",b);
        }
        else
        {
            printf("%d is Smallest.\n",c);
        }
    }


    return 0;
}