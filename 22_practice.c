#include<stdio.h>

int main(){
    int i=1;
    int sum=0;
    do
    {
        sum += (8*i);
        i++; 
    } while (i<=10);
    printf( "The value of the table of 8 is %d\n",sum);
    
     return 0;
}