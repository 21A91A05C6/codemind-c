#include<stdio.h>
#include<string.h>
int main()
{
    int i,c=1;
    char str[100];
    scanf("%s",str);
    for(i=1;i<strlen(str);i++)
    {
        if(str[i]>=65 and str[i]<=90)
        {
            c++;
        }
    }
    printf("%d",c);
}