#include<stdio.h>
int main()
{
    int n; int count=0 ; 
    printf("Enter the number");
    scanf("%d",&n);
    if (n<= 1 )
        printf("non prime ");
    for (int i=2; i <= n/2; i++)
    {
        if (n%i==0)
        {
        //    printf("non prime");
           count++;
           break;
        }
        
    }
    if(count == 0 )
        printf("prime no.");
    else printf("non prime");
 return 0;   
}