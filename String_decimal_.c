#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,t,flag=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s);
        //printf("%s",s);
        for(i=0;i<strlen(s);i++)
        {flag=0;
            if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z')
            {
                flag=1;
                break;
            }
            
        }
        if(flag==1)
        {
            printf("False
");
        }
        else
        {
            printf("True
");
        }
    }
    
}