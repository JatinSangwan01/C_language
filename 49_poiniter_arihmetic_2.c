#include <stdio.h>

int main()
{
    // POINTER ARITHMETIC USING CHARTER POINTER
    char a = 'A';
    char *ptr = &a;
    printf("The adress of a is %u\n", &a);
    printf("The adress of a is %u\n", ptr);
    ptr++;

    printf("The value of ptr is %u\n", ptr);

    // POINTER ARITHMETIC USING CHARTER POINTER
    printf("\n");
 int r = 3;
 int *ptr2 = &r;
    printf("The adress of r is %u\n", &r);
    printf("The adress of r is %u\n", ptr2);
    ptr2++;

    printf("The value of ptr is %u\n", ptr2);
    return 0;
}