#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int t,n,arr[100],i;
    float avg=0.0,sum=0.0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        //printf("%d
",n);
        for(i=0;i<n-1;i++)
        {
            scanf("%d",&arr[i]);
        }
        sum=0.0;
        for(i=0;i<n-1;i++)
        {
            sum=sum+arr[i];
        }
        avg=(n*(n+1))/2;
        printf("%.0f
",abs(avg-sum));
    }
}