#include<stdio.h>
void minimum(int a , int b)
{
    (a>b)?printf("%d is minimum",b):printf("%d is minimum",a);
}
int main()
{
    minimum(10,5);
}