#include<stdio.h>
int main()
{
    int v,k,l,n;
    scanf("%d",&n);
    for(v=1;v<=n;v++)
    {
        for(k=1;k<=n;k++)
        {
            printf("%c ",v+64);
        }
        printf("
");
    }
    return 0;
}