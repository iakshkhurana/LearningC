#include<stdio.h>
#define PI 3.14159
int main()
{
    int r;
    printf("Enter the radius of your circle: ");
    scanf("%d",&r);
    int Circumference = 2 * PI * r;
    printf("The perimeter of circle is %d",Circumference);
    return 0;
}

//You can also use const float PI = 3.14;