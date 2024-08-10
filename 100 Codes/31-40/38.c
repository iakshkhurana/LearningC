#include<stdio.h>
int main()
{

     int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    int sum=0;
    while(n!=0){
int digit=n%10;
sum=(sum*10)+digit;
n=n/10;
    }
    printf("%d",sum);

 return 0;
}