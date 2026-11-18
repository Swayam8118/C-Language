#include<stdio.h>
int main()
{
    //Separate digits of a given no. e.g. 351—1,5,3.
    int num, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Digits of the number are: ");
    while(num != 0)
    {
        digit = num % 10;
        printf("%d ", digit);
        num = num / 10;
    }
    return 0;
}