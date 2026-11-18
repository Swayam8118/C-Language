#include<stdio.h>
int main()
{
    //Calculate sum and mean of any 10 values.
    int sum = 0;
    float mean;
    int value;

    printf("Enter 10 values: ");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &value);
        sum = sum + value;
    }
    mean = (float)sum / 10;
    printf("Sum: %d\n", sum);
    printf("Mean: %.2f\n", mean);

    return 0;
}