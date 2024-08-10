#include<stdio.h>
int sum_natural(int);
int sum_natural(int n){
    if(n==1){
        return 1;
    }
    
    return sum_natural(n-1) +n;
}

int main(){
    int j;
    printf("enter a natural number:");
    scanf("%d",&j);
    printf("the sum of natural number %d is %d",j,sum_natural(j));
     return 0;
}