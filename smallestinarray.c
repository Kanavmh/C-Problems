#include <stdio.h>    
     
int main(){
    
    int a[4]= {121,214,342,4123};
    int length = sizeof(a)/sizeof(a[0]);    
    int min = a[0];    
    for (int i = 0; i < length; i++) {     
       if(a[i] < min)    
           min = a[i];    
    }      
    printf("Smallest element: %d\n", min);    
    return 0;    
}    
