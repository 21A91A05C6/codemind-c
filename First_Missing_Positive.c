#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],i;
    float sum=0.0,avg=0.0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            sum=sum+arr[i];
        }
    }
    avg=(n*(n+1))/2;
    if(avg<sum)
    {
        printf("1");
    }
    else
    {
        printf("%.0f",(avg-sum));
    }
}