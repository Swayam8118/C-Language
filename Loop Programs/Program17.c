#include<stdio.h>
int main()
{
    //Count +ve,-ve and zeroes in n values.
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    int positive = 0, negative = 0, zero = 0;

    printf("Enter %d values: ", n);
    for(int i = 1; i <= n; i++)
    {
        int value;
        scanf("%d", &value);
        if(value > 0)
            positive++;
        else if(value < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Zeroes: %d\n", zero);

    return 0;
}