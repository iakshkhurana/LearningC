#include<stdio.h>
void Greatest(int a,int b, int c)
{
    if(a>b)
    {
        if (a>c)
        {
            printf("%d is greatest",a);
        }
        else
        {
            printf("%d is greatest",c);
        }
    }
    else //b>a
    {
        if(b>c)
        {
            printf("%d is greatest",b);
        }
        else
        {
            printf("%d is greatest",c);
        }
    }
}
int main()
{
    Greatest(10,30,20);
    return 0;
}