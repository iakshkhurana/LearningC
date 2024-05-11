#include<stdio.h>
int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d",&age);
    if(age<13 && age>0)
    {
        printf("Child");
    }
    else if(age<20 && age>13)
    {
        printf("Teen");
    }
    else if(age<60 && age>20)
    {
        printf("Adult");
    }
    else
    {
        printf("Senior");
    }
    return 0;
}