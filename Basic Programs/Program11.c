#include<stdio.h>
int main()
{
    //Convert grams into kg.
    float grams, kg;
    printf("Enter Grams : ");   
    scanf("%f",&grams);
    kg = grams / 1000;

    printf("Kg : %0.2f",kg);

    return 0;
}