#include<stdio.h>
int main()
{
    int n,arr[100],i,t,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
         if(arr[i]==t)
         {
             flag=1;
             printf("%d ",i);
             break;
         }
         
    }
    
    if(flag==0)
    {
        printf("-1");
    }
}