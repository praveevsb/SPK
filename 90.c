#include<stdio.h>
int main()
{
    char ch[100];
    int i;
    printf("Enter the string:");
    scanf("%s",ch);
    for(i=0;ch[i]!='\0';i++)
    {
        if(isdigit(ch[i]))
        {
            printf("%c",ch[i]);
        }
    }
    return 0;
}

