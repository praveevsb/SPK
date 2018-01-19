#include<stdio.h>
int main()
{
int num,rem,sum,s=0;
printf("enter the number:");
scanf("%d",num);
while(num>0)
{
rem=num%10;
sum=rem*rem*rem:
s=sum+s;
num=num/10;
}
if(num==s)
printf("yes");
else
print("no");
return 0;
}
