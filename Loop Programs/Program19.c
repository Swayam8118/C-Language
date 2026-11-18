#include<stdio.h>
int main()
{
    //Print all integers from 1 to 100, which are divisible by 5
    printf("Integers from 1 to 100 divisible by 5:\n");
    for(int i = 1; i <= 100; i++)   
    {
        if(i % 5 == 0)
            printf("%d ", i);
    }   



    return 0;
}