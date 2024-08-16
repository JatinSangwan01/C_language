#include <stdio.h>

int main()
{
    int marks[5];
printf("Enter marks of 5 students\n");
// scanf("%d",&marks [0]);
// scanf("%d",&marks [1]);
// scanf("%d",&marks [2]);
// scanf("%d",&marks [3]);
// scanf("%d",&marks [4]);

for (int i = 0; i < 5; i++)
{
    scanf("%d",&marks [i]);
}
for (int i = 0; i < 5; i++)
    {
printf("the marks of 1st and 3rd student is %d and %d\n" ,marks [0],marks [2]);
break;
}

return 0;
}