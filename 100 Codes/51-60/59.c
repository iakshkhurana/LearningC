#include<stdio.h>
int main()
{

    int num;
    int*ptr;
    ptr=&num;
    printf("Enter the value");
    scanf("%d",ptr);
    printf("%d",*ptr);

 return 0;
}