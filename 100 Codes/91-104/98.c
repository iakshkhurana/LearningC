#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
printf("Welcome\n");
int *arr=(int*)calloc(10,sizeof(int));
if(arr==NULL)printf("Memory not allocated");
srand(time(NULL));
for(int i=0;i<10;i++){
    arr[i]=rand()%100;//random numbers 
}

for(int i=0;i<10;i++){
    printf("%d \n",arr[i]);
}
int *shrinked=(int*)realloc(arr,5*sizeof(int));
if(shrinked==NULL)printf("not reallocated");
for(int i=0;i<5;i++){
printf("%d\n",shrinked[i]);
}
free(arr);
free(shrinked);
arr=shrinked=NULL;
 return 0;

}