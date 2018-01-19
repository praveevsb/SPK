#include<stdio.h>
int main()
{
int i,b=1,p,d;
printf("enter number and its power:");
scanf("%d%d",&p,&d);
for(i=1;i<=d;i++)
{
b=b*p;
}
printf("the value is %d",b);
return 0;
}
