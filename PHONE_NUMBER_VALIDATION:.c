#include<stdio.h>
int main()
{
    int a,b=0;
    scanf("%d",&a);
    while(a>0)
    {
        a=a/10;
        b++;
        if(b==10&&a==0)
        {
            b--;
        }
    }
    if(b==9)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}