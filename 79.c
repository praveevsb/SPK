#include <stdio.h>

int main()
{
    int a, n,c,d;
    printf("Enter the numbers: ");
    scanf("%d%d",&c,&d);
    n=c*d;
    for(a = 0; a <= n; a++)
    {
        if (n == a * a)
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
