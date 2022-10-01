#include<stdio.h>
#include<math.h>
int ispallindrome(int n)
{
    int rev=0,d,temp;
    temp=n;
    while(n>0)
    {
        d=n%10;
        n=n/10;
        rev=rev*10+d;
    }
    if(temp==rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int i,n,n1=0,n2=0,above=0,below=0;
    scanf("%d",&n);
    n1=n+1;
    while(1)
    {
        if(ispallindrome(n1)==1)
        {
            above=n1;
            break;
        }
        else
        {
            n1++;
        }
    }
    n2=n-1;
    while(1)
    {
        if(ispallindrome(n2)==1)
        {
            below=n2;
            break;
        }
        else
        {
            n2--;
        }
    }
    if(abs(n-above)==abs(n-below))
    {
        printf("%d %d",below,above);
    }
    else if(abs(n-below)<=abs(n-above))
    {
        printf("%d",below);
    }
    else
    {
        printf("%d",above);
    }
}