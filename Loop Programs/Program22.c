#include<stdio.h>
int main()
{
    //Count how many digits are there in a given no. e.g. 351-3.
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0)
    {
        num = num / 10;
        count++;
    }
    printf("Number of digits: %d", count);
    return 0;
}