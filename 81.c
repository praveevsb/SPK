#include<stdio.h>
int main()
{
    int t,m[100],n[100],i;
    printf("enter the no of times");
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&m[i],&n[i]);
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",n[i]-m[i]);
        
    }
    return 0;
}
