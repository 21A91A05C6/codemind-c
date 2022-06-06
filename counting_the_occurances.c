#include<stdio.h>
int main()
{
    int i,c,flag=0;
    char str[10000],ch;
    scanf("%[^
]s",str);
    scanf("%s",&ch);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==ch)
        {
            flag=1;
            c++;
            
        }
    }
    if(flag==1)
    {
        printf("%d",c);
    }
    else
    {
        printf("-1");
    }
}