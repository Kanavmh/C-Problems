#include <stdio.h>    
     
int main(){
    int i, a[20], small, pos=0, n;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        small= a[0];
    }    
    for(i=1; i<n; i++){
        if(a[i]<small){
            small=a[i];
            pos=i;
        }
    }    
    int length = sizeof(a)/sizeof(a[0]);    
    int min = a[0];    
    for (int i = 0; i < length; i++) {     
       if(a[i] < min)    
           min = a[i];    
    }      
    printf("Smallest element: %d\n", small);    
    return 0;    
}    
