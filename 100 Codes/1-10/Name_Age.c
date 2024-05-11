#include<stdio.h>
int main()
{
    char firstName[10];
    char lastName[20];
    int age;
    printf("Enter first name : ");
    scanf("%s",&firstName);
    printf("\nEnter last name: ");
    scanf("%s",&lastName);
    printf("\nEnter age : ");
    scanf("%d",&age);

    printf("\nThe age of %s %s is %d",firstName,lastName,age);
    return 0;
}