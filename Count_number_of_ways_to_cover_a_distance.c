#include<stdio.h>
int distance(int n)
{
    if(n<0)
    {
        return 0;
    }
    else if(n==0)
    {
        return 1;
    }
    else
    {
        return (distance(n-1)+distance(n-2)+distance(n-3));
    }
}
int main()
{
    int i,n,k;
    scanf("%d",&n);
    k=distance(n);
    printf("%d",k);
}