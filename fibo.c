#include<stdio.h>
int main()
{
int n,i,a=0,b=1;
for(i=2;i<=n;i++)
{
c=a+b;
b=a;
c=b;
}
printf("fibonacci series is :");
printf("%d%d%d\n",a,b,c);
return 0;
}
