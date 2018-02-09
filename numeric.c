#include<stdio.h>
int main()
{
char ch;
printf("enter the character");
scanf("%s",&ch);
if(ch>='0'&&ch<='9')
{
printf("it is numeric);
}
else
{
printf("not numeric");
}
return 0;
}
