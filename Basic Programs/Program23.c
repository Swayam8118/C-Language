#include<stdio.h>
int main()
{
    //Calculate average of three subjects along with their total.
    float subject1, subject2, subject3, total, average;

    printf("Enter marks of first subject: ");
    scanf("%f", &subject1);
    printf("Enter marks of second subject: ");
    scanf("%f", &subject2);
    printf("Enter marks of third subject: ");
    scanf("%f", &subject3);

    total = subject1 + subject2 + subject3;
    average = total / 3.0;

    printf("Total = %.2f\n", total);
    printf("Average = %.2f\n", average);

    return 0;
}