#include<stdio.h>
int fibonacci(int i){
    if(i<=1)return i;
     int ans=fibonacci(i-1)+fibonacci(i-2);
    return ans;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d ",fibonacci(i));
    }
    
 return 0;
}