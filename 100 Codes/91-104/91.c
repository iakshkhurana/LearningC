#include<stdio.h>
#include<string.h>
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
    Car ford;
    ford.year=2016;
    strcpy(ford.color,"yellow");
    strcpy(ford.model,"Aspire");
    strcpy(ford.make,"Ford");
    print_car(&ford);
 return 0;
}