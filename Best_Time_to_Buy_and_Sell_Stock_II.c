#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++)
    {
        if(arr[i-1]<arr[i])
        {
            sum=sum+(arr[i]-arr[i-1]);
        }
    }
    printf("%d",sum);
}