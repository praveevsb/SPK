#include <stdio.h>
int main(void) 
{
int a,b,d;
char ch;
printf("ENTER THE NUMBERS\n");
scanf("%c",&ch);
scanf("%d%d",&a,&b);
switch (ch)
{
	case '/':
		d=a/b;
		printf("%d / %d = %d",a,b,d);
		break;
	case '%':

		d=a%b;
		printf("%d\t%\t%d = %d",a,b,d);
		break;
}
	return 0;
}
