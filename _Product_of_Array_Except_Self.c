#include<stdio.h>
int main()
{
    int n,arr[100],i,p[100],prod=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
         prod=prod*arr[i];
    }
    for(i=0;i<n;i++)
    {
         p[i]=prod/arr[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",p[i]);
    }
}