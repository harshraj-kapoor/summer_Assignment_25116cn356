#include <stdio.h>

int main()
{
    int n, i, k = 0;
    printf("enter n\n");
    scanf("%d", &n);

    if(n<2)
    {
        printf("no is not prime");
        return 0;
    }

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            k = 1;
            break;
        }
    }
    if (k == 1)
        printf("no is not prime");
    else
        printf("no is prime");

    return 0;
}
