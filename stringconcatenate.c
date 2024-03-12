#include<stdio.h>
#include<string.h>

int main(){
    char str1[25];
    printf("Enter string: ");
    gets(str1);
    strcat(str1, "ming");
    printf("Value of string: %s",str1);
}


