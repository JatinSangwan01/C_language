#include<stdio.h>

int main(){
    int j =5;
    printf("The value of j is %d\n",j );
j= j + 100000000000000000;
    printf("The value of j is %d\n",j++ );

    printf("The value of j is %d\n",j );
    j +=5;
    printf("The value of j is %d\n",j );

     return 0;
}