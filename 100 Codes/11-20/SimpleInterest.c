#include<stdio.h>
void SI(int P, int R, int T)
{
    float SimpleInterest = (P*R*T)/100;
    printf("SI = %.2f",SimpleInterest);
}
int main()
{
    SI(5000,2,10);
}