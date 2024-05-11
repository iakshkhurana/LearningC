#include<stdio.h>
int main()
{
    int INT_VALUE = 10;
    printf("Enter number: ");
    scanf("%d",&INT_VALUE);
    float FLOAT_VALUE = INT_VALUE;
    printf("Original Number : %d",INT_VALUE);
    printf("Floating Number : %f",(float)INT_VALUE);
    return 0;
}