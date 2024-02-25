/******************************************************************************

Two numbers are entered through the keyboard. Write a
program to find the value of one number raised to the power
of another

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b, i;
    printf("first number: ");
    scanf("%d", &a);
    printf("second number: ");
    scanf("%d", &b);
    
    for (i=1; i<b; i++){
        a=a*b;
        
    }
    printf("%d",a);
    
    return 0;
}
