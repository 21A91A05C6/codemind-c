#include<stdio.h>
int isdivisible(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    return c;
}
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(isdivisible(i)==9)
        {
            printf("%d ",i);
            c++;
        }
        
    }
    printf("
");
    printf("Total=%d",c);
}