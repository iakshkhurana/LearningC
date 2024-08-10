#include<stdio.h>
int main()
{

    int num;
    int *ptr;
    ptr=&num;
    *ptr=12;
    printf("%d",*ptr);
 return 0;
}