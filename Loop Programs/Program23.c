#include<stdio.h>
int main()
{
    //Summation of digits of a given no. e.g. 351 = 1+5+3 = 9
    int num, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    printf("Sum of digits: %d", sum);
    return 0;
}