#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int t,i,l,flag=0;
    scanf("%d",&t);
    //l=strlen(s);
    while(t>0)
    {
        //int t,i,l,flag=0
        scanf("%s",s);
        l=strlen(s);
        for(i=0;i<l;i++)
        {flag=0;
            if(s[i]!=s[l-i-1])
            {
                flag=1;
               // printf("1");
                break;
            }
        }
        if(flag==0)
        {
            printf("YES ");
            if(l%2==0)
            {
                printf("EVEN
");
            }
            else
            {
                printf("ODD
");
            }
        }
        else
        {
            printf("NO
");
        }
        t--;
    }
}