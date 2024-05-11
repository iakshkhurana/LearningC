#include<stdio.h>
void arithOp(float a,float b)
{
    printf("Addition (+) = %.2f",a+b);
    printf("\nSubtraction (-) = %.2f",a-b);
    printf("\nMultiplication (*) = %.2f",a*b);
    printf("\nDivision (/) = %.2f",a/b);
    printf("\nRemainder (%) = %d",(int)a%(int)b);
}
int main()
{
    arithOp(11,5);
    return 0;
}