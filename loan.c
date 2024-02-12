#include <stdio.h>

int main()
{
    int loan1,loan2,loan3, limit;
    
    
    printf("Limit: ");
    scanf("%d", &limit);
    
    if(loan1<limit){
        printf("Amount of loan1: ");
        scanf("%d", &loan1);}
    else{
        printf("Limit exceeded.");
    };
    
    
    if(loan1<limit){
        printf("Amount of loan2: ");
        scanf("%d", &loan2);}
    else{
            printf("Limit exceeded.");
        };
    
    if (loan1==0){
        printf("Eligible for loan3 \n");
        printf("Amount of loan3: ");
        scanf("%d", &loan3);
        if(loan3>limit){
            printf("Exceeded limit.");
        }
    }else{
        printf("Not eligible for loan3, Pay off loan1 first");
    }
    

    return 0;
}
