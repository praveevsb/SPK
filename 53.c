#include<stdio.h>
int main()
{
int i,n,r,sum=o;
printf("enter the integer");
scanf("%d",&n);
i=n;
while(n!=0)
{
r=n%10;
sum=sum+r;
n=n/10;
}
printf("sum of digits is %d",sum);
return 0;
}
