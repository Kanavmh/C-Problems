#include<stdio.h>
#include<string.h>

int main(){
    char str1[25], str2[25];
    printf("enter string: ");
    scanf("%s",&str1);
    strcpy(str2,str1);
    printf("String value: %s",str2);
}


