#include<stdio.h>
#include<string.h>
int main()
{
char STORED_PASSWORD[]="pa$$word";
char input[15];
do {
scanf("%s",input);
}while(strcmp(STORED_PASSWORD,input)!=0);
printf("Access granted");

 return 0;
}