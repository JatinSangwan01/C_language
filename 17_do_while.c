#include<stdio.h>

int main(){
    int n ;
    int i=1;
    scanf("%d",&n);
    
    
    do
    {
       
          printf("%d X %d =%d \n",n,i,n*i);
        /*for (int i = 10; i; i--)
    {
        printf("%d X %d =%d \n",n,i,n*i);
    }*/
   i++;
    
      
    } while (i<=10);
    
    

     return 0;
}
