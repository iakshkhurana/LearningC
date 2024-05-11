#include<stdio.h>
int main()
{
    char name[30];
    printf("Enter your name: ");
    gets(name);
    printf("Welcome %s to Thapar",name);
    return 0;
}

//Used gets here to write a name with spaces as well