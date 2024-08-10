#include<stdio.h>
#include<string.h>
typedef struct student{
    char id[10];
char name[50];
char year[10];
char grade;
}student;
void increase_grade(student*stu){
stu->grade--;
}
void decrease_grade(student*stu){
    stu->grade++;
}
void print_student(student*stu){
    printf("The student with %s name has id:%s and studies in %s year and has acheievd %c grade",stu->name,stu->id,stu->year,stu->grade);
}
int main()
{
// Student stu1={.id="CS001",.name="Ravi",year="First",.grade='B'};
student students[3];
strcpy(students[0].id,"CS001");
strcpy(students[0].name,"Shubham");
strcpy(students[0].year,"first");
students[0].grade='A';
strcpy(students[1].id,"CS002");
strcpy(students[1].name,"Rahul");
strcpy(students[1].year,"second");
students[1].grade='B';
strcpy(students[2].id,"CS003");
strcpy(students[2].name,"Jyoti");
strcpy(students[2].year,"third");
students[2].grade='C'; 
decrease_grade(&students[0]);
increase_grade(&students[2]);
print_student(&students[0]);
print_student(&students[1]);
print_student(&students[2]);


 return 0;
}