#include<stdio.h>
int main()
{
    int n,x,max=0,arr[100],i,flag=0;
    scanf("%d%d",&n,&x);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<=x)
        {
            max++;
        }
        else
        {
            if(flag==0)
            {
                flag=1;
            }
            else 
            {
                break;
            }
        }
    }
    
    printf("%d",max);
    return 0;
}