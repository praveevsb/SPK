#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int i,d=0;scanf("%s",&ch);
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]==ch[i+1])
        {
            d=1;
            break;
        }
    }
if(d==1)
printf("not isogram");
else
printf("isogram");
return 0;
}
