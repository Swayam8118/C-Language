#include<stdio.h>
int main()
{
    /*  Find out how many boys and girls are there in a class of 50 students.
        Input sex code.*/
    int boys = 0, girls = 0;
    for(int i = 1; i <= 50; i++)
    {
        char sex;
        printf("Enter sex code for student %d (M/F): ", i);
        scanf(" %c", &sex);
        if(sex == 'M' || sex == 'm')
            boys++;
        else if(sex == 'F' || sex == 'f')
            girls++;
        else
            printf("Invalid input. Please enter M or F.\n");
    }

    printf("Number of boys: %d\n", boys);
    printf("Number of girls: %d\n", girls);

    return 0;
}