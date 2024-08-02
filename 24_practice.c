#include<stdio.h>

int main(){
     int product =0;
     int n ;
scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        product += (8*i);

    }
    printf( "The product is %d\n",product);

     return 0;
}