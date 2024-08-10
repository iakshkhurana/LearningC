#include<stdio.h>
void increment(n){
    printf("Before increment %d\n ",n);
    n++;
    printf("After increment %d\n",n);
}
int main()
{

    int n;
    scanf("%d",&n);
    printf("%d",n);
    increment(n);
    printf("%d\n",n);
 return 0;
}