#include<stdio.h>
int main()
{
    //Print 1st n natural nos
    int n;

    printf("Enter Number : ");
    scanf("%d",&n);
    
   for(int i=1;i<=n;i++)
       {
           printf("%d\n",i);
       }

    
    return 0;
}