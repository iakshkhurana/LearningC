#include<stdio.h>
int main()
{

    char day[10];
    char month[15];
    int year;
    printf("Welcome to formatting date\n");
    scanf("%s",day);
    scanf("%s",month);
    scanf("%d",&year);
    printf("The date is %s: %s: %d:",day,month,year);
 return 0;
}