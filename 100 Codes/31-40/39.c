#include<stdio.h>
int main()
{

       int n;
    printf("Enter the value of n");
    scanf("%d",&n);
int a=0;
int b=1;
int nextnumber=1;
for(int i=0;i<n;i++){
    nextnumber=a+b;
    printf("%d",a);
    a=b; 
    b=nextnumber;

}
 return 0;
}