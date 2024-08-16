#include <stdio.h>
int *sum(int a, int b);
int *sum(int a, int b)
{
    int s = a + b;
    int *ptr = &s;
    printf("the sum is %d\n", s);
    return ptr;
}

float *average(int a, int b)
{
    float avg = (a+b)/2.0;
    float *ptr = &avg;
    printf("the average is %f\n", avg);
    return ptr;
}

int main()
{
    int v;
    int f;
    printf("enter first digit:");
    scanf("%d", &v);
    printf("enter second digit:");
    scanf("%d", &f);

    int *ptr1;
    int *ptr2;

    ptr1 = sum(v, f);
    ptr2 = average(v, f);

    printf("The adress of sum is %u and the adress of average is %u ", ptr1, ptr2);
    return 0;
}