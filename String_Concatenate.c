#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char s1[100],s2[100];
    char temp;
    scanf("%s",s1);
    scanf("%s",s2);
    strcat(s1,s2);
    //printf("%s",s1);
    for(i=0;i<strlen(s1);i++)
    {
        for(j=0;j<strlen(s1)-1;j++)
        {
            if(s1[j]>s1[j+1])
            {
                temp=s1[j];
                s1[j]=s1[j+1];
                s1[j+1]=temp;
            }
        }
    }
    printf("%s",s1);
}