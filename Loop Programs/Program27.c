#include<stdio.h>
int main()
{
    //Find out factors of a given no.  e.g. 6-1,2,3,6
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factors of %d are: ", n);
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}