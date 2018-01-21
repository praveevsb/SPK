#include<stdio.h>
int main()
{
int a=34,b=43;
a=a+b;
b=a-b;
a=a-b;
printf("after swap");
printf("a=%d",a);
printf("b=%d",b);
return 0;
}
