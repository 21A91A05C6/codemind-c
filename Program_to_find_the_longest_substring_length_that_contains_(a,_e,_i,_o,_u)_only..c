#include<stdio.h>
#include<string.h>
#include<math.h>
/*int isvowel(string s)
{
    int i;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='i')
        {
            return 1;
        }
    }
    return 0;
}*/
int main()
{
    char s[100];
    int i,c=0,m=0;
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='i')
        {
            c++;
            if(c>m)
            {
                m=c;
            }
            else
            {
                continue;
            }
        }
        else
        {
            c=0;
        }
    }
    printf("%d",m);
}