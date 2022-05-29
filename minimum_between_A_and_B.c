#include<stdio.h>
int main()
{
    int arr[100],i,n,k,l,c=0,min;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&k,&l);
    min=arr[n-1];
    for(i=0;i<n;i++)
    {
        if(arr[i]>=k && arr[i]<=l)
        {
            if(min>arr[i])
            {
                c++;
                min=arr[i];
            }
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",min);
    }
}