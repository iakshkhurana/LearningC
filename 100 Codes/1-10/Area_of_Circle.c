#include<stdio.h>
int main()
{
    int radius;
    printf("Enter the value of radius: ");
    scanf("%d",&radius);
    float area;
    area = 3.14 * radius * radius;
    printf("The area of the circle is %f",area);
    return 0;
}