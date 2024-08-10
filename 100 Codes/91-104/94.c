#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct Car{
    char make[25];
    char model[25];
    int year;
    char color[15];
}Car;
void print_car(Car *car){
    printf("This %s model of car which is  %s colored car was purcahsed in %d year and is made by %s company",car->model,car->color,car->year,car->make);
}
int main()
{
   Car*ptr=(Car*)malloc(sizeof(Car));
   printf("Enter name of model");
   scanf("%s",ptr->model);
   printf("Now enter make");
   scanf("%s",ptr->make);
     printf("Now enter year");
       scanf("%d",&ptr->year);
       printf("Now enter color ");
          scanf("%s",ptr->color);
          print_car(ptr);
          free(ptr);
          ptr=NULL;
       

 return 0;
}