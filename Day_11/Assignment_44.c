#include <stdio.h>

int factorial(int n);

int main()
{
    int n, result;
    printf("enter number ");
    scanf("%d", &n);

    result = factorial(n);
    printf("factorial = %d", result);

    return 0;
}

int factorial(int n)
{
    int i, fact = 1;

    if (n == 0 || n == 1)
        return 1;

    for (i = 2; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}
