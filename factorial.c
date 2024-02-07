#include <stdio.h>
void main()
{
  int sum=0,n,i,fact =1;
  printf("enter the number\n");
  scanf("%d",&n);
  i=n;
  if(n==0)
  printf("Factorial of 0 is 0");
  else
  {
  loop:
  if(i==0)
  goto print;
  else
  {
  	fact=fact*i;
  	i=i-1;
  	goto loop;
  }
  print:
  	printf("factorial of %d is %d",n,fact);
}}
