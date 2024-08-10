#include<stdio.h>
int main()
{

    int n;
int sum=0;
    do {
printf("Please enter the number");
scanf("%d",&n);
if(n<0){
    continue;
}
sum+=n;
    }while(n!=0);
    printf("%d",sum);
 return 0;
}