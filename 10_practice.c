#include<stdio.h>

int main(){
    int a=5, b=62, c=7, d=8;
 if(a>b&&a>c&&a>d){
    printf("The gratest of all is %d ", a);
 }   
  else if(b>a&&b>c&&b>d){
    printf("The gratest of all is %d ", b);
 }   
 else if(c>b&&c>a&&c>d){
    printf("The gr atest of all is %d ", c);
 }   
  else if(d>b&&d>a&&d>a){
    printf("The grwatest of all is %d ", d);
 }   
     return 0;
}