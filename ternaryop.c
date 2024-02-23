/******************************************************************************
user will input 2 numbers 
if first is greater than second then subtract two number otherwise add 2 using conditional operator
*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    
    c=a-b;
    d=a+b;
    
    (a>b) ? printf("%d",c) : printf("%d", d);
    
    return 0;
}
