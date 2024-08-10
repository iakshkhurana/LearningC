#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    printf("Welcome to our dynamic characters");
    char *sentence=(char*)calloc(100,sizeof(char));
    if(sentence==NULL)printf("Memory empty\n");
// printf("Ensuring all elements are initialized");
//     for(int i=0;i<100;i++){
// printf("%c",sentence[i]);
//     }

printf("Now enter piece of text");
fgets(sentence,100,stdin);
fputs(sentence,stdout);
 return 0;
 free(sentence);
 sentence=NULL;
}