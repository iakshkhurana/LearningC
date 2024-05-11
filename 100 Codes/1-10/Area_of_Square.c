#include<stdio.h>
int main()
{
    int side;
    printf("Insert the length of side of your square : ");
    scanf("%d",&side);
    int area;
    area = side*side;
    printf("The area of the square is : %d",area);
    return 0;
}

//The same can be done using functions
//Take side input
//and return side*side