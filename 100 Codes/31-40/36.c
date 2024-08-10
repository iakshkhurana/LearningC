#include<stdio.h>
int main()
{

     int a,b;
    printf("Enter both the numbers");
    scanf("%d %d",&a,&b);
    for(int i=a<b?a:b;i>=1;i--){
        if(a%i==0&&b%i==0){
            printf("%d",i);
            break;
        }
    }
 return 0;
}