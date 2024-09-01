#include <stdio.h>

int main()
{
    int s[] = {1,
               2,
               3,
               4,   
               
               5,
               6,
               7,
               8,
               9,  
               10};
   int *ptr =s;
   printf("the value at adress %u is %d", ptr+2,*(ptr+2));
   
    return 0;
}