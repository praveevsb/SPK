#include<stdio.h>
int main()
{
double frstnum,scndnum,tempnum;
printf("enter the first num:");
scanf("%lf",&frstnum);
printf("enter the second num:");
scanf("%lf",&scndnum);
tempnum=frstnum;
frstnum=scndnum;
scndnum=tempnum;
printf("after swap first num is %lf",frstnum);
printf("after swap second num is %lf",scndnum);
return 0;
}
