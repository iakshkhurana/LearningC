#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    int sum=0;
    while(n!=0){
        int digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    printf("%d",sum);

 return 0;
}