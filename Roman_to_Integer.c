#include<stdio.h>
#include<string.h>
int main()
{
    char rom[1000];
    int arr[1000],i,k,len;
    scanf("%s",rom);
    len=strlen(rom);
    for(i=0;i<len;i++)
    {
        switch(rom[i])
        {
            case 'I':arr[i]=1;
            break;
            case 'V':arr[i]=5;
            break;
            case 'X':arr[i]=10;
            break;
            case 'L':arr[i]=50;
            break;
            case 'C':arr[i]=100;
            break;
            case 'D':arr[i]=500;
            break;
            case 'M':arr[i]=1000;
            break;
            default:printf("invalid choice");
        }
    }
    k=arr[len-1];
    for(i=len-1;i>0;i--)
    {
        if(arr[i]>arr[i-1])
        {
            k=k-arr[i-1];
        }
        if(arr[i]<=arr[i-1])
        {
            k=k+arr[i-1];
        }
    }
    printf("%d",k);
}