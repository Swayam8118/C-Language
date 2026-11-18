#include<stdio.h>
int main()
{
    //Convert kgs into grams
    float kgs, grams;
    printf("Enter Kgs : "); 
    scanf("%f",&kgs);
    grams = kgs * 1000;

    printf("Grams : %0.2f",grams);
    

    return 0;
}
