#include<stdio.h>
int main()
{
    //Add, multiply, subtract and divide two numbers.
    int a, b;
    float add, sub, mul, div;

    printf("Enter Value Of A : ");
    scanf("%d", &a);

    printf("\nEnter Value Of B : ");
    scanf("%d", &b);

    add = a + b;
    sub = a - b;
    mul = a * b;
    div = (float)a / b;

    printf("\nAddition of Two Numbers : %.2f", add);
    printf("\nSubtraction of Two Numbers : %.2f", sub);
    printf("\nMultiplication of Two Numbers : %.2f", mul);
    printf("\nDivision of Two Numbers : %.2f", div);

    return 0;
}