#include<stdio.h>
int main()
{
    int t,n,dc,d,temp;
    scanf("%d",&t);
    while(t--)
    {
        dc=0;
        scanf("%d",&n);
        //printf("%d ",n);
        temp=n;
        while(n)
        {
            d=n%10;
            n=n/10;
            dc++;
        }
        if(temp==0)
        {
            printf("1 ");
        }
        else
        {
            printf("%d ",dc);
        }
        
    }
}