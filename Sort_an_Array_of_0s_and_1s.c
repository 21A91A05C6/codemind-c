#include <stdio.h>
void sort_of(int *arr, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] == 0)
            count++;
    for (int i = 0; i < count; i++)
        arr[i] = 0;
    for (int i = count; i < n; i++)
        arr[i] = 1;
}
void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
int main()
{
    int n,arr[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort_of(arr, n);
    print(arr, n);
    return 0;
}