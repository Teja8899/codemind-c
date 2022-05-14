#include<stdio.h>
void sum(int n)
{
    int k,v,r=0;
    for(k=1;k<=n;k++)
    {
        scanf("%d",&v);
        r+=v;
    }
    printf("%d",r);
}
int main()
{
    int n;
    scanf("%d",&n);
    sum(n);
}