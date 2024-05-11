#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number to be checked: ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
    }
    return 0;
}