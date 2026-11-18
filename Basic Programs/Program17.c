#include<stdio.h>
int main()
{
    //Calculate area & perimeter of a square. A = L^2, P = 4L
    float side, area, perimeter;
    printf("Enter the length of the side of the square: ");
    scanf("%f", &side);
    area = side * side;
    perimeter = 4 * side;
    printf("Area of the square: %0.2f\n", area);
    printf("Perimeter of the square: %0.2f\n", perimeter);

    return 0;
}