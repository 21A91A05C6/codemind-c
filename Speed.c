#include<stdio.h>
int main()
{
    int n,t,i,arr[100],c=0,min;
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        min=arr[0];
        for(i=0;i<n;i++)
        {
            if(arr[i]<=min)
            {
                c++;
                min=arr[i];
                
            }
        }
        printf("%d
",c);
    }
}
