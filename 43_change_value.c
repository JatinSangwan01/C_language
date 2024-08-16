#include <stdio.h>
void change_the_value(int *);
void change_the_value(int *a)
{
    *a = *a * 10;
}
int main()
{
    int d ;
    printf("enter the value whose ten times you want:");
    scanf("%d", &d);
    change_the_value(&d);
    printf("The ten times is %d", d);
    return 0;
}