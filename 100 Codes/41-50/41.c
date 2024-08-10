#include<stdio.h>
int main()
{

     int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    int sum=0;
    int temp=n;
    while(n!=0){
int digit=n%10;
sum=(sum*10)+digit;
n=n/10;
    }
   if(sum==temp)printf("It is a palindrome");
   else printf("Not palindrome");

 return 0;
}