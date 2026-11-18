#include<stdio.h>
int main()
{
    //Calculate sum and mean of any n values.
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    int sum = 0;
    float mean;
    int value;

    printf("Enter %d values: ", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &value);
        sum = sum + value;
    }
    mean = (float)sum / n;
    printf("Sum: %d\n", sum);
    printf("Mean: %.2f\n", mean);

    return 0;
}