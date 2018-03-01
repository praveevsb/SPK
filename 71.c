#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],c[100];
    printf("enter the string");
    gets(str);
    strcpy(c,str);
    strrev(c);
    if(strcmp(str,c)==0)
    printf("it is palindrome");
    else
    printf("it is not palindrome");
    return 0;
}
