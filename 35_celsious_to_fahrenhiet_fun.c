#include<stdio.h>
float c2f(float);
float c2f(float c){
    return((9*c)/5) +32;
}

int main(){
    float c;
    printf("Enter the temperature in celsius:");
scanf("%f",&c);
printf("celsius to fehranhiet for %f is %.2f",c,c2f(c));
     return 0;
}