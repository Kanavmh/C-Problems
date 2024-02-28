/******************************************************************************
Write a program to display factorial using while loop
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i,f;
    f=i=1;
    n=5;
    while(i<=n)
    {
        f*=i;
        i++;
    }
    printf("%d",f);
    return 0;
}

