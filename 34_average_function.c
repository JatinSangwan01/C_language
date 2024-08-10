#include<stdio.h>
float average (float a, float b, float c);    
float average (float a,float b, float c){
    return ((a+b+c)/3);
}    

int main(){
    float  q, w, e;
    printf("enter first iniger:");
    scanf("%f",&q );
    printf("enter second iniger:");
scanf("%f",&w );
    printf("enter third iniger:");
scanf("%f",&e );
    printf("The average is %.2f",average(q,w,e));
     return 0;
}