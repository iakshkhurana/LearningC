#include<stdio.h>
#include<string.h>
int main()
{

   char input[15];
   while(1){
    printf("Enter your input");
    scanf("%s",input);
    if(strcmp(input,"exit")==0)break;
   } 
   printf("String terminated");
 return 0;
}