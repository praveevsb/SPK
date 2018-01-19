#include<stdio.h>
int main()
{
int i,n,count=0;
printf("ENTER THE NUM:");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if((n%i)==0)
++count;
}
if(count==0)
printf("num is prime");
else
printf("not a prime");
return 0;
}
