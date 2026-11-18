#include<stdio.h>
int main()
{
    //Reverse digits of a given no.  e.g. 351—153.
    int num, reversed = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0)
    {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }
    printf("Reversed number: %d", reversed);
    return 0;
}