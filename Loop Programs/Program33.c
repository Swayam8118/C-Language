#include<stdio.h>
int main()
{
    /*Check whether a given no. is automorphic no. or not. Automorphic nos. 
    are the nos. whose last digit(s) of square of any no=no itself. e.g. 5-25,6-36,25-625*/

    int n, square, last_digit;
    printf("Enter a number: ");
    scanf("%d", &n);
    square = n * n;

    last_digit = square % 10;
    if (last_digit == n)
    {
        printf("%d is an automorphic number.\n", n);
    }
    else
    {
        printf("%d is not an automorphic number.\n", n);
    }


    return 0;
}