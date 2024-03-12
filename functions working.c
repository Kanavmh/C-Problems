#include <stdio.h>

void italy();  /*declare functions*/
void argentina();
void brazil();

void main()  /*function called*/
{
    printf("\n This is main()");
    italy();
    argentina();
    brazil();
    printf("\n I am back in main() ");
}
 void italy(){      /*function defined*/
     printf("\n This is italy");
 }
 void argentina(){
     printf("\n This is argentina");
 }
 void brazil(){
     printf("\n This is brazil");
 }
