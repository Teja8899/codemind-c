#include<stdio.h>
int main()
{
    int v,k,l,n;
    scanf("%d",&n);
    for(v=1;v<=n;v++)
    {
        for(k=1;k<=v;k++)
        {
            printf("%d",k);
        }
        printf("
");
    }
    return 0;
}