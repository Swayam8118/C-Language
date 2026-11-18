#include<stdio.h>
int main()
{        
    /*Calculate total, average of marks of three subjects. Give following grades to the student.
        If average   >= 70, distinction,
                     >= 60, first,
                     >= 50, second,
                     >= 35, third class,
                     Otherwise fail.
                     If student secures < 35 marks in any subject then declare student fail.*/
    
    
    float sub1,sub2,sub3,total,avg;

    printf("Enter marks of First Subjects : ");
    scanf("%f",&sub1);

    printf("\nEnter marks of Second Subjects : ");
    scanf("%f",&sub2);

    printf("\nEnter marks of Third Subjects : ");
    scanf("%f",&sub3);

    total = sub1 + sub2 + sub3;
    avg = total / 3;

    printf("\nTotal Marks : %.2f",total);
    printf("\nAverage Marks : %.2f",avg);

    if(sub1<35 || sub2<35 || sub3<35)
    {
        printf("Student is Fail");
    }
    else
    {
        if(avg>=70)
        {
            printf("Student is Distinction");
        }
        else if(avg>=60)
        {
            printf("Student is First Class");
        }
        else if(avg>=50)
        {
            printf("Student is Second Class");
        }
        else if(avg>=35)
        {
            printf("Student is Third Class");
        }
    }


    return 0;
}