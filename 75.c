#include<stdio.h>
#include<string.h>
int main(void)
{
    char ch[100];
    int n,r;
    printf("Enter the string:");
    scanf("%s",ch);
    n=strlen(ch);
    r=n/2;
    ch[r]='*';
    printf("%s",ch);
    return 0;
}
