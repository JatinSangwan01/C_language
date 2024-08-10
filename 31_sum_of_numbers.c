#include <stdio.h>
int sum(int, int);

int sum(int x, int y)
{
    printf("The sum of numbers is %d", x + y);
}

int main()
{
    int j, s;

    printf("Enter the value of first intiger:\n ");
    scanf("%d", &j);
    printf("Enter the value of second intiger:\n ");
    scanf("%d", &s);
    sum(j, s);
    printf("\n");

    int j1, s1;

    printf("Enter the value another  first intiger:\n ");
    scanf("%d", &j1);
    printf("Enter the value of second intiger:\n ");
    scanf("%d", &s1);
    sum(j1, s1);

    return 0;
}
