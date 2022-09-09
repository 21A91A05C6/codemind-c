#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],s1[100];
    int i,j=0;
    scanf("%s",s);
    for(i = 0; s[i] != NULL; i++)
    {
        if (s[i] == '.')
        {
            s1[j] = '[';
            s1[j+1] = '.';
            s1[j+2] = ']';
            j = j+ 3;
        } 
        else
        {
            s1[j++] = s[i];
        }
    }

    s1[j] = NULL;
    printf("%s",s1);
}
    
