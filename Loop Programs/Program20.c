#include<stdio.h>
int main()
{
    //Print sum of all integers from 1 to 100, which are divisible by 3.
    int sum = 0;
    printf("Integers from 1 to 100 divisible by 3:\n");
    for(int i = 1; i <= 100; i++)
    {
        if(i % 3 == 0)
        {
            printf("%d ", i);
            sum = sum + i;
        }
    }
    printf("\nSum: %d", sum);

    return 0;
}