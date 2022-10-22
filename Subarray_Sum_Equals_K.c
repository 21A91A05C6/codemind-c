#include<stdio.h>
int main()
{
    int n,m,arr[100],i,c=0,j,sum=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {sum=0;
        for(j=i;j<n;j++)
        {
            sum=sum+arr[j];
            if (sum==m)
            {
                c++;
            }
        }
        
    }
    printf("%d",c);
}