#include <stdio.h>

int armstrong(int n);

int main()
{
    int n, result;
    printf("enter number ");
    scanf("%d", &n);

    result = armstrong(n);

    if (result == 1)
        printf("%d is Armstrong\n", n);
    else
        printf("%d is not Armstrong\n", n);

    return 0;
}

int armstrong(int n)
{
    int original = n;
    int sum = 0;

    while (n > 0)
    {
        int d = n % 10;
        sum = sum + (d * d * d);
        n = n / 10;
    }

    if (sum == original)
        return 1;
    else
        return 0;
}
