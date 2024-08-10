#include<stdio.h>
int square(n){
    return n*n;
}
int main()
{
    int n;
    scanf("%d",&n);
    int s= square(n);
    printf("%d",s);
 return 0;
}