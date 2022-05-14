#include<stdio.h>
int main()
{
    int a[2003],b=0,n,r,j;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        a[b]=r;
        n/=10;
        b++;
    }
    for(j=b;j>=0;j--)
    {
        if(a[j]==6)
        {
            a[j]=9;
            break;
        }
    }
    for(j=b-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
}