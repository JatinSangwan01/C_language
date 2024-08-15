#include<stdio.h>

int main(){
    char ch= 'K';
   
    printf("The character is %c\n",ch);
    printf("The value of intiger is %d\n", ch);
    if( ch >=97 && ch<=122){
        printf("This intiger is lower case\n");

    }
else {
    printf("This is not lower case\n");
}
     return 0;
}
