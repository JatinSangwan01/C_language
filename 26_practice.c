#include <stdio.h>

int main()
{
    int i = 1;
    int n;
    scanf("%d", &n);
    int not_prime = 0;
    if (n == 0 || n == 1)
    {
        not_prime = 1;
    }
    else
    {
        while (i < n)
        {
            printf("%d is  prime\n", n);
            if (n % i == 0 && n != 2)
            {
                not_prime = 1;
                break;
            }i++;
        }
    }
    if (not_prime)
    {
        printf("%d is not prime\n", n);
    }
    else
    {
        printf("%d is prime\n", n);
    }

    return 0;
}