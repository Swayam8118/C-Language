#include<stdio.h>
int main()
{       
    /*Find out whether a given no. is armstrong no. or not. 
    If sum of cube of digits = no. itself then it is the armstrong no. e.g. 153.*/
    int num, original, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while(num != 0)
    {
        digit = num % 10;
        sum += digit * digit * digit;
        num = num / 10;
    }
    if(original == sum)
        printf("The number is an Armstrong number.");
    else
        printf("The number is not an Armstrong number.");
    return 0;
}