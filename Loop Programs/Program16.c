#include<stdio.h>
int main()
{
    //Find out largest and smallest out of n nos.
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);
    int largest, smallest;  

    printf("Enter %d values: ", n);
    for(int i = 0; i < n; i++)
    {
        int value;
        scanf("%d", &value);
        if(i == 0)
        {
            largest = value;
            smallest = value;
        }
        else
        {
            if(value > largest)
                largest = value;
            if(value < smallest)
                smallest = value;
        }
    }

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);



    return 0;
}