#include <stdio.h>    
     
int main(){
    int i, a[20], pos=0, n;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    printf("Duplicate elements: \n");     
    for(int i = 0; i < n; i++) {    
        for(int j = i + 1; j < n; j++) {    
            if(a[i] == a[j])    
                printf("%d\n", a[i]);    
        }    
    }    
    return 0;    
}
