#include<stdio.h>
#include<string.h>

int main(){
    char str[15];
    fgets(str,sizeof(str),stdin);
    for(int i=0,j=strlen(str)-1;i<=j;i++,j--){
        int temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    fputs(str,stdout);
    return 0;
}