#include<stdio.h>
int main()
{
    int i,n,a[100],largest;
    printf("enter the range");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    largest=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>largest)
        largest=a[i];}
        printf("largest is %d",largest);
        return 0;
}
