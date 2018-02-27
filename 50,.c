#include <stdio.h>
 
int main()
{
    int num,tnum,flag;
     
    printf("Enter an integer number: ");
    scanf("%d",&num);
     
    tnum=num;
    flag=0;
    
    while(tnum!=1)
    {
        if(tnum%2!=0){
            flag=1;
            break;
        }
        tnum=tnum/2;
    }
  
    if(flag==0)
        printf("%d is the power of 2.",num);
    else
        printf("%d is not the power of 2.",num);
      
    return 0;
}
