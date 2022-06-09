#include<stdio.h>
#include<stdlib.h>
void fib(int n)
{
    int ans,a,b,c;
    if(n==0)
    {
        printf("0");
        return ;
        
    }
    a=0;
    b=1;
    c=a+b;
    while(c<=n)
    {
        a=b;
        b=c;
        c=a+b;
        
    }
    if(abs(c-n)>abs(b-n))
    {
        printf("%d",b);
    }
    else if(abs(c-n)==abs(b-n))
    {
        printf("%d %d",b,c);
    }
    else
    {
        printf("%d",c);
    }
}
int main()
{
    int i,a,b,c,n;
    scanf("%d",&n);
    fib(n);
}