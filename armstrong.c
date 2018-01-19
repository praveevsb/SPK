#include<stdio.h>
int main()
{
int num,rem,sum,s=0,spk;
printf("enter the number:");
scanf("%d",&num);
  spk=num;
while(num>0)
{
rem=num%10;
sum=rem*rem*rem;
s=sum+s;
num=num/10;
}
if(spk==s)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
