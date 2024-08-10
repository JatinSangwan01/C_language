#include<stdio.h>
int factorial(int);
int factorial(int e){
if(e==1||e==0){//base condition
    return 1;
}
return factorial(e-1)*e;
}
int main(){ 
    int j;
    printf("Enter the whose factorial you want:");
scanf("%d",&j);
    printf("the factorial  of %d is %d  ",j,  factorial(j));
     return 0;
}