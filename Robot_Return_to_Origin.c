#include<stdio.h>
#include<string.h>
int main()
{
    int i,lft=0,up=0;
    char str[10000];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='L')
        {
            lft++;
        }
        if(str[i]=='R')
        {
            lft--;
        }
        if(str[i]=='U')
        {
            up++;
        }
        if(str[i]=='D')
        {
            up--;
        }
    }
    if(lft==0 && up==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}