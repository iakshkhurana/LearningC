#include<stdio.h>
#include<stdbool.h>
int main()
{

    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    
    
    bool isTrue=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isTrue=0;
            break;
        }
    }
    
    if(isTrue==1)printf("It is a prime number");
    else{
        printf("It is not a prime number");
    }
 return 0;
}