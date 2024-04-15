
#include <stdio.h>
#include <string.h>
void main(){
    char names[][10]={"Akshay",
    "Parag", "Raman", "Srinivas","Gopal", "Rajesh"};
    int i;
    char t;
    printf("\n Original: %s %s",&names[2][0],&names[3][0]);
    for(i=0;i<=9;i++){
        t=names[2][i];
        names[2][i]=names[3][i];
        names[3][i]=t;
    }
    
    printf("\n New: %s %s",&names[2][0],&names[3][0]);
}
  
