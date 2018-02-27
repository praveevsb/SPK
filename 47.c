#include<stdio.h>
int main()
{int t,i,j,n,a[100];
  printf ("enter the number");
  scanf ("%d", &n);
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);
     
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
            
        }
    }
  printf("biggest and smallest number is %d and %d",a[0],a[n-1]);
  return 0;
}
