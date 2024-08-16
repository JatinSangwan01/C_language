#include<stdio.h>

int main(){
    int i =63;
    int* j= &i;
    int k= 92;
    printf("The adress of i is %p\n",&i);
    printf("The adress of i is %p\n",j);
    printf("The adress of i is %p\n",&k);

printf("The value at adress j is %d\n ",k);
     return 0;
}