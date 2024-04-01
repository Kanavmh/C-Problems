#include <stdio.h>

void display(int*, int);
void main(){
    int num[]= {24,243,23,34,44,12};
    display(&num[0],6);
    
}
void display(int *j, int n){
    int i;
    for(i=0; i<=n-1;i++){
        printf("\n element= %d",*j);
        j++;
    }
}
