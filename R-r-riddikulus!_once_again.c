#include<stdio.h>
int main()
{
    int n,x,max=0,arr[100],i,flag=0;
    scanf("%d%d",&n,&x);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=x;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<x;i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}