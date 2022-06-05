#include<stdio.h>
void main ()
{
    int number,originalNum,remainder,result=0;

    printf("Enter the number to reverse\n:");
    scanf("%d",&number);

    originalNum=number;
    while (originalNum>0)
    {
       remainder=originalNum%10;
       result=(result*10)+remainder;
       originalNum/=10;
    }
    printf("%d",result);
    
}