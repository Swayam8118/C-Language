#include<stdio.h>
int main()
{
    //Print fibonacci series. 1,1,2,3,5,8,…upto n nos.
    int n, first = 1, second = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series: %d %d ", first, second);
    for (int i = 3; i <= n; i++)
    {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }


    
    return 0;
}