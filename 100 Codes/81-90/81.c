#include<stdio.h>
#include<string.h>
int main()
{

    const char STORED_PASSWORD[]="Hello";
    char password[50];
    scanf("%s",password);
     if(strcmp(password,STORED_PASSWORD)==0){
        puts("Access granted");
     }
     else {
        printf("Not granted");
     }
 return 0;
}