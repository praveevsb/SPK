#include<stdio.h>
int main()
{
    int i,n,p=0;
    printf ("Enter a number \n");
    scanf ("%d",&n);
    for (i=1;i<=n;i++)
    {
        if(n%i==0)
        p=p+1;
    }
    if (p==2)
    printf ("The number is PRIME");
    else
    printf ("The number is COMPOSITE");
    return 0;
}
