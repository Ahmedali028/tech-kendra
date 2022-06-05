#include<stdio.h>
void main()
{
    int n;
    
    int rev=0;
    printf("Enter the number to check ");
    scanf("%d",&n);
    int original=n;

    while (n>0)
    {
        int rem=n%10;
        rev =(rev*10)+rem;
        n=n/10;

    }
    if (original==rev)
    {
      printf("Number is palindrome");

    }
    
    else 
        printf ("Number is not palindrome");
}