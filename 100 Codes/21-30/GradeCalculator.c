#include<stdio.h>
int main()
{
    int A,B,C,D,F;
    int grades;
    printf("Enter your grades: ");
    scanf("%d",&grades);
    if(grades>100)
    {
        printf("INVALID");
    }
    else
    {
        if(grades>90)
        {
            printf("A Grade");
        }
        else if(grades>75 && grades<90)
        {
            printf("B Grade");
        }
        else if(grades>60 && grades <75)
        {
            printf("C Grade");
        }
        else if(grades>30 && grades<60)
        {
            printf("D Grade");
        }
        else
        {
            printf("F Grade");
        }
    }
    return 0;
}