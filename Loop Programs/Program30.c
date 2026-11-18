#include<stdio.h>
int main()
{
    //Find out all prime nos. between 1 and 500

    int i, j, f;

    printf("Prime numbers between 1 and 500 are:\n");

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
            printf("%d ", i);
        }
    }

    return 0;
}