#include <stdio.h>
int len(char*);

int main() {
    char arr[]= "bamboozled";
    int len1, len2;
    len1=len(arr);
    len2=len("Humpty");
    printf("\n String=%s length=%d",arr,len1);
    printf("\n String=%s length=%d","humpty",len2);
    
}
int len(char*s){
    int l=0;
    while(*s!=0){
        l++;
        s++;
    }
    return(l);
}
