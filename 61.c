#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int i,k;
    printf("enter the string");
    scanf("%s",&ch);
    printf("enter the number");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
printf("%c",ch[i]);
}
return 0;
}
