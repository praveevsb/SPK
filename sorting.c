#include<stdio.h>
int main()
{
int i,j,n,a[100],r;
printf("enter the number");
scanf("%d",&n);
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
a[j]=t;
}
}
}
for(i=0;i<n;i++)
printf("%d",a[i]);
return 0;
}
