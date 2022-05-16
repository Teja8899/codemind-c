#include<stdio.h>
int npal(int b)
{
    int r,s=0,d;
    r=b;
    while(b)
    {
        d=b%10;
        s=s*10+d;
        b/=10;
    }
    if(s==r)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int pr(int b)
{
    int r,l=0;
    for(r=1;r<=b;r++)
    {
        if(b%r==0)
        {
            l++;
        }
    }
    if(l==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a,b;
    scanf("%d",&a);
    for(b=a+1;;b++)
    {
        if(npal(b) && pr(b))
        {
            printf("%d",b);
            break;
        }
    }
}