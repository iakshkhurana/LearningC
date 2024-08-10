#include<stdio.h>
#include<string.h>
int main()
{
    //inbuilt function method
char input[100];
 fgets(input,100,stdin);
// strupr(input);

//without using inbuilt functions
int size=0;
for(int i=0;input[i]!='\0';i++){
size++;
}
for(int i=0;i<size;i++){
    if(input[i]>='a'&&input[i]<='z'){
        input[i]=input[i]-32;
    }
}
fputs(input,stdout);



 return 0;
}