#include <stdio.h>
#include <math.h>
int main()
{
  int n, temp, rev=0, i, d;
  scanf("%d", &n);
  while (1)
  {
    n++;
    temp= n;
    while(temp)
    {
        d=temp%10;
        temp=temp/10;
        rev=rev*10+d;
    }
    if (rev == n)
    {
      d = (int)sqrt(n);
      for (i = 2; i <= d; i++)
      {
        if (n%i == 0)
          break;
      }
      if (i == d+1)
        break;
    }
    rev = 0;
  }

  printf("%d",n);

  return 0;
}