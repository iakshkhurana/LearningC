#include<stdio.h>
int main()
{
    printf("The Perimeter of Rectangle can be calculated as:-");
    printf("\nInput all sides A,B,C,D : ");
    int A,B,C,D;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    int Perimeter;
    Perimeter = A + B + C + D;
    printf("The Perimeter of Rectangle ABCD = %d",Perimeter);
    return 0;
}