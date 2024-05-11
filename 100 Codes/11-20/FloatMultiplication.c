#include<stdio.h>
int main()
{
    float first, second;
    printf("Enter the first and the second numbers: ");
    scanf("%f %f",&first,&second);
    float result = first * second;
    printf("\n Product is : %f",result);
    return 0;
}