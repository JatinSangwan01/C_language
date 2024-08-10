#include<stdio.h>
float force( float mass);
float force( float mass){
    return (mass*9.8);
}
int main(){
    float m;
    printf("Enter the mass:");
    scanf("%f",&m);
printf("the foce of attraction for mass %f is %.2f",m,force(m));
     return 0;
}