#include<stdio.h>
#include<string.h>

int main(){
    char str[25];
    int i=0;
    printf("enter string: ");
    gets(str);
    while(str[i]!='\0'){
        i=i+1;
    }
    printf("String lenth: %d",i);
}
