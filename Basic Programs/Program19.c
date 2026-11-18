#include<stdio.h>
int main()
{       
    //Calculate area of a circle. A = 22/7 * R * R
    float area,radius;
    printf("Enter The Radius Of Circle : ");
    scanf("%f",&radius);
    area = 22.0/7.0 * radius * radius;
    printf("Area Of Circle : %0.2f\n",area);


    return 0;
}