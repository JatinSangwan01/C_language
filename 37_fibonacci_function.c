#include<stdio.h>
int fibonacci(int);
int fibonacci(int n){
    if(n==1 ||n==2  ){
        return n-1;
    }
    return fibonacci (n-1)+ fibonacci (n-2);
}

int main(){
    int j;
    printf("Enter the value:");
    scanf("%d",&j);
    printf("The value of fibonacci series at  %d is %d",j,fibonacci(j));
     return 0;
}