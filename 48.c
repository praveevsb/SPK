#include<stdio.h>
int main()
{
  int n, a[100], i, avg, sum = 0;
  printf ("enter the number");
  scanf ("%d", &n);
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);
     
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
  avg = sum/n;
  printf ("average is %d",avg);
  return 0;
}
