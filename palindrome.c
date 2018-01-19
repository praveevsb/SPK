#include<stdio.h>
int main()
{
int n,r=0,rem;
while(n!=0)
{
rem=n%10;
r=r*10+rem;
n=n/10;
}
if(n==r)
printf("num is palindrome");
else
printf("num is not palindrome");
return 0;
}
