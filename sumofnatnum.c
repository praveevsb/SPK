#include<stdio.h>
void main()
{
int i, n,sum;
printf("enter a number\n");
scanf("%d",n);
for(i=0;i<=n;i++)
{
sum=sum + i;
}
printf("sum of first %d natural number =%d\n",n,sum);
}
