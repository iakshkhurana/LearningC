#include<stdio.h>
void CI(int P, int R, int T)
{
    float CompoundInterest = P*(1+(R/100))*T;
    printf("SI = %.2f",CompoundInterest);
}
int main()
{
    CI(5000,2,10);
    return 0;
}