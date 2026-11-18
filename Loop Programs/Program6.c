#include<stdio.h>
int main()
{
    //Print 1st n even nos.
    int n;

    printf("Enter Number : ");
    scanf("%d",&n);
    
   for(int i=2;i<=2*n;i=i+2)
       {
           printf("%d\n",i);
       }

    
    return 0;
}