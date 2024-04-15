#include <stdio.h>
#include <string.h>
void main(){
    char *names[]={"Akshay",
    "Parag", "Raman", "Srinivas","Gopal", "Rajesh"};
    char *temp;
    printf("\n Original: %s %s",names[2],names[3]);
    temp=names[2];
    names[2]=names[3];
    printf("\n New: %s %s",names[2],names[3]);
}
  
