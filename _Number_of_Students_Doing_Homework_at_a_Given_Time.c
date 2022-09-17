#include<stdio.h>
int main()
{
    int n,m,arr[100],brr[100],i,end_time,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&brr[i]);
    }
    scanf("%d",&end_time);
    for(i=0;i<n;i++)
    {
        if(arr[i]<=end_time && brr[i]>=end_time)
        {
            c++;
        }
    }
    printf("%d",c);
}