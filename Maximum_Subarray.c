#include <stdio.h>

// function for kadane's algorithm
int kadane(int *nums, int n) 
{
    int max= nums[0];
    int sum = 0;
    
    for (int i = 0; i < n; i++) 
    {
        if (sum< 0)
            sum = 0;
        sum += nums[i];
        if (sum > max)
            max = sum;
    }
    
    return max;
}

// test the code
int main() 
{
  int arr[100],i;
  int n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  printf("%d", kadane(arr, n));
  return 0;
}