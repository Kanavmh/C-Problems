#include <stdio.h>
int pass(int j, int b);

int main(){
    int i=135, a=135, k;
    k =pass(i,a);
    printf("\n %d",k);
}

int pass(int j, int b){
    int c;
    c=j+b;
    return(c);
}
