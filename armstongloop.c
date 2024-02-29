/******************************************************************************
Write  a program to see whether a number is armstrong or not
*******************************************************************************/
#include<stdio.h>
int main(){
    int a,b;
    int sum=0,temp;    
    printf("enter the number=");    
    scanf("%d",&a);    
    temp=a;    
    while(a>0){    
        b=a%10;    
        sum=sum+(r*r*r);    
        a=a/10;    
        
    }    
    if(temp==sum)    
    printf("armstrong  number ");
    else    
    printf("not armstrong number");    
    return 0;  
}
