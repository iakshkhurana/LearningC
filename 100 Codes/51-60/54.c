#include<stdio.h>
float Max(float a,float b ){
float max=a>b?a:b;
  return max;
}
int main()
{

   float a,b;
    scanf("%f %f",&a,&b);
    float max=Max(a,b);
    printf("%f",max);
 return 0;
}