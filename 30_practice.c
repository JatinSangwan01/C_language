#include <stdio.h>

int main()
{
    char j = '*';
    int max = 10;
    while(1)
    {for (int stars_to_print = 34; stars_to_print <= max; stars_to_print++){
    for (int i = 1; i < max; i++){
        
        printf("%c",j++);
        printf("\n");
    }
    }
}
    return 0;
}