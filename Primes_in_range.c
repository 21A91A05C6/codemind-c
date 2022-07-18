#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,m,c=0,c1=0;
    scanf("%d",&n);
    scanf("%d",&m);
    if(n==1)
    {
        n=2;
    }
    for (i=n;i<=m;i++)
    {c1=0;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                c1++;
            }
        }
        if(c1==0)
        {
            c++;
        }
    }
    printf("%d",c);
}