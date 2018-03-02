#include<stdio.h>
#include <string.h>
void main()
{
    int i,j,n;
    char ch[200][500],temp[500];
    printf("Enter the no. of words:");
    scanf("%d",&n);
    for(i=0;i<n;++i)
        scanf("%s[^\n]",ch[i]);
    for(i=0;i<n-1;++i)
        for(j=i+1;j<n;++j)
        {
            if(strcmp(ch[i],ch[j])>0)
            {
                strcpy(temp,ch[i]);
                strcpy(ch[i],ch[j]);
                strcpy(ch[j],temp);
            }
        }
    printf("\nIn lexicographical order: \n");
    for(i=0;i<n;++i)
    {
        puts(ch[i]);
    }
}
