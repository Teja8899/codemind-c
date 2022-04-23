#include<stdio.h>
int main()
{
    int v,k,l,n;
    scanf("%d",&n);
    for(v=1;v<=n;v++)
    {
        for(k=1;k<=n;k++)
        {
            printf("%d ",v);
        }
        printf("
");
    }
    return 0;
}