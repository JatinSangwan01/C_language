#include<stdio.h>
int returning_5(int* ptr){
printf(" the value of ptr is %d\n",ptr);
printf(" the value at ptr is %u\n",*ptr);


}
int main(){
    int i;
     printf("enter the value:");
    scanf("%d",&i);
    int* ptr =&i;
    printf("the adress of i is %u\n",&i);
    returning_5(ptr);
     return 0;
}