#include<stdio.h>
void main()
{
    int n,originalnum,remainder,result=0;
    printf("Enter the number to check");
    scanf("%d",&n);
    originalnum=n;
    while (originalnum>0)
    {
      remainder=originalnum%10;
      result+=remainder*remainder*remainder;
      originalnum/=10;
    }
   
    if (result==n)
    {
       printf("The number is armstrong");
        /* code */
    }
    else  printf("The number is not armstrong");
   
    
    

}