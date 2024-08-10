#include<stdio.h>
void minmax(int *a,int *b,int*min,int*max){
if(*a<*b){
    *min=*a;
    *max=*b;
}
else{
    *min=*b;
    *max=*a;
}

}
int main()
{

    int a,b,min,max;
    scanf("%d %d",&a,&b);
    minmax(&a,&b,&min,&max);
    printf("%d %d",min,max);
 return 0;
}