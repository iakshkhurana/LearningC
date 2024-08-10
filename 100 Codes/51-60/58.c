#include<stdio.h>
int reverse(int num,int rev){
if(num==0)return rev;

return reverse(num/10,rev*10+num%10);

}
int main()
{
    int num;
printf("Welcome to palindrome checker\n");
printf("Enter the number");
scanf("%d",&num);
int rev=reverse(num,0);
if(num==rev)printf("palindrome");
else printf("not palindrome");




 return 0;
}