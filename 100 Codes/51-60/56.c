#include<stdio.h>
int Average(int a,int b,int c,int d,int e){
    
return (a+b+c+d+e)/5;
}
int main()
{

    int a,b,c,d,e;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    int avg=Average(a,b,c,d,e);
    printf("%d",avg);

 return 0;
}