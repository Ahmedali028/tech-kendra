#include<stdio.h>
void main()
{
    int number,remainder,originalNum,result=0;
    printf("Enter the number of choice:\n");
    scanf("%d",&number);
    originalNum=number;
    while (originalNum>0)
    {
        /* code */
        remainder=originalNum%10;
        result+=remainder;
        originalNum/=10;
    }
    printf("%d",result);
    
}