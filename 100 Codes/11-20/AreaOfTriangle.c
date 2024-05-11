#include<stdio.h>
#define half 0.5
int area(int b, int h)
{
    int areaOfTriangle = half * b * h;
    printf("Area of Triangle is : %d",areaOfTriangle);
}
int main()
{
    area(10,5);
    return 0;
}