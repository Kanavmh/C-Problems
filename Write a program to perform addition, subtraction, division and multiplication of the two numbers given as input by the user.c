#include <stdio.h>

int main()
{
    float x, y, sum, sub, division, product;
    printf("Enter 1st number: ");
    scanf("%2f", &x);
    printf("Enter 2nd number: ");
    scanf("%2f", &y);
    sum=x+y;
    sub=x-y;
    division=x/y;
    product=x*y;
    printf("Sum = %.2f \n",sum);
    printf("Subtraction = %.2f \n",sub);
    printf("Division = %.2f \n",division);
    printf("Product = %.2f \n",product);

    return 0;
}
