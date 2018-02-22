#include<stdio.h>
int main()
{
    int n,m,p;
    printf("enter the numbers");
    scanf("%d%d",&n,&m);
    p=n*m;
    if(p%2==0)
    printf("product is even");
    else
    printf("product is odd");
}
