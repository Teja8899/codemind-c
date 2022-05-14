#include<stdio.h>
int main()
{
    int a,b,c,d=1,i;
    scanf("%d%d%d",&a,&b,&c);
    for(i=1;i<=b;i++)
    {
        d=d*a;
    }
    printf("%d",d%c);
    return 0;
}