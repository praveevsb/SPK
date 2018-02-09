#include<stdio.h>
int main()
{
int i,j,n,a[100],r;
printf("enter the number");
scanf("%d",&n);
printf("enter the values");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
r=a[i];
a[i]=a[j];
a[j]=r;
}
}
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("median is %d",a[n/2]);
return 0;
}
