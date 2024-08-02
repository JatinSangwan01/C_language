#include<stdio.h>

int main(){
   for (int i = 0 ; i < 14; i++)
      {
       // if(i==10)
      //break;}//The loop will exit
       if(i==12 ){
       continue;}//skip this iteration now    
        printf("%d\n",i);
      }  
     return 0;
}