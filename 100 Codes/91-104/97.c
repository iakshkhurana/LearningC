#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct coordinates{
int x;
int y;


}coordinates;
void input_point(coordinates* point){
  printf("Enter the start value");
  scanf("%d",&point->x);
  printf("Enter the end value");
  scanf("%d",&point->y);
}
void print_point(coordinates* point){
printf("%d",point->x);
printf("%d",point->y);
printf("\n");

}
int main()
{
printf("Welcome!\n");
coordinates *start=(coordinates*)malloc(sizeof(coordinates));
coordinates *end=(coordinates*)calloc(10,sizeof(coordinates));
if(start||end==NULL){printf("No memory allocated");
}
input_point(start);
input_point(end);
print_point(start);
print_point(end);
free(start);
free(end);
start=end=NULL;

 return 0;
}