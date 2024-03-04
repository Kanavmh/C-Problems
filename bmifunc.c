#include<stdio.h>

float BMI(float w, float h) {
   return w/h*h;
}
int main() {
    
    int w;
    float h;
    
    printf("Weight:");
    scanf("%d",&w);
    
    printf("Height:");
    scanf("%.2f",&h);

   float bmi = BMI(w,h);
   printf("BMI index is : %.2f ",bmi);
   return 0;
}
