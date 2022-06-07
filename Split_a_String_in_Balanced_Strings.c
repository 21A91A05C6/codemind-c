#include<stdio.h>
int main()
{
    int i,lft=0,rht=0,c=0;
    char str[10000];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='L')
        {
            lft++;
        }
        else if(str[i]=='R')
        {
            rht++;
        }
        if(lft==rht)
        {
            c++;
            lft=0;
            rht=0;
        }
        
    }
    printf("%d",c);
    
}