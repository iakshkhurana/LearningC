#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    if(a>0)
    {
        printf("Positive number");
    }
    else if (a<0)
    {
        printf("Negative number");
    }
    else
    {
        printf("Zero");
    }
    return 0;
}