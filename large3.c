#include<stdio.h>
void main()
{
int a,b,c;
printf("enter three numbers");
scanf("%d%d%d",a,b,c);
if(a>=b&&a>=c)
printf("5d is large",a);
elseif(b>=a&&b>=c)
printf("%d is large",b);
else
printf("%d is a large",c);
}
