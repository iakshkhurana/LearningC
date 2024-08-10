#include<stdio.h>
int main()
{
     int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    int temp=n;
    int sum=0;
    while(n!=0){
        int digit=n%10;
sum=sum+(digit*digit*digit);
n=n/10;

    }
    if(sum==temp)printf("It is an armstrong number");
    else printf("Not an armstrong");
 return 0;
}