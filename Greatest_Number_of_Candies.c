#include<stdio.h>
int main()
{
    int i,n,a[2003],b,l=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(a[i]>l)
        {
            l=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==l)
        {
            printf("True ");
        }
        else
        {
            a[i]=a[i]+b;
            if(a[i]>=l)
            {
                printf("True ");
            }
            else
            {
                printf("False ");
            }
        }
    }
    return 0;
}