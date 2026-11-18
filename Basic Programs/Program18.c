#include<stdio.h>
int main()
{
    //Calculate area & perimeter of a rectangle. A = L*B, P = 2 (L+B)
    float length, breadth, area, perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("Area of the rectangle: %0.2f\n", area);
    printf("Perimeter of the rectangle: %0.2f\n", perimeter);

    return 0;
}