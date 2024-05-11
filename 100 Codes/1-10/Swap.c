#include<stdio.h>
int main()
{
    int temp;
    int a = 10;
    int b = 20;
    printf("Before swapping a=%d , b=%d",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter swapping a=%d , b=%d",a,b);
    return 0;
}