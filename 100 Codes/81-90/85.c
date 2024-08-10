#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
 char str[50];
 scanf("%s",str);
 bool isPalindrome=true;
 for(int i=0,j=strlen(str)-1;i<=j;i++,j--){
if(str[i]!=str[j]){
    isPalindrome=false;
    break;
}}
if(isPalindrome==true){
    printf("String is palindrome");
}else printf("String is not palindrome");


 
    
 return 0;
}