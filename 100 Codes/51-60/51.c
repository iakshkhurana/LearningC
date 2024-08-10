#include<stdio.h>
int sum(int a,int b,int c,int d){
   int sum2=a+b+c+d;
    return sum2;
}
int main()
{

    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d );
    int add=sum(a,b,c,d);
    printf("%d",add);
 return 0;
}