#include<stdio.h>
int main()
{
    //Check whether a given no. is palindrome no or not. e.g. 12321.
    int num, reversed = 0, digit, original;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while(num != 0)
    {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }
    if(original == reversed)
        printf("The number is a palindrome.");
    else
        printf("The number is not a palindrome.");
    return 0;
}