#include<stdio.h>
int main()
{
    int n1,n2,rem,sum=0,i,t1;
    printf("enter the number");
    scanf("%d%d",&n1,&n2);
    
    for(i=n1+1;i<n2;i++)
    {
        t1=i;sum=0;
       while(t1>0)
       {
    rem=t1%10;
    sum=sum+rem*rem*rem;
    t1=t1/10;
    }
    if(i==sum)
    {
    printf("%d",i);
}
}

return 0;
}
