#include<stdio.h>
#include<stdlib.h>
int main()
{
int n;
printf("Enter the number of float values");
scanf("%d",&n);
float *arr=(float*)malloc(n*sizeof(float));
if(arr==NULL)printf("short of memeory");
for(int i=0;i<n;i++){
    printf("Now enter element number %d ",(i+1));
    scanf("%f",&arr[i]);
}
printf("Here are elements\n");
for(int i=0;i<n;i++){
    printf("%.2f\n",arr[i]);
}
free(arr);
arr=NULL;
 return 0;
}