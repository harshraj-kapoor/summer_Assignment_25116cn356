#include <stdio.h>

int perfect(int n);

int main()
{
    int n;
    printf("enter number");
    scanf("%d", &n);

    if (perfect(n))
        printf("%d is perfect\n", n);
    else
        printf("%d is not perfect\n", n);

    return 0;
}

int perfect(int n)
{
    int i, sum= 0;

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum = sum + i;
    }

    if (sum == n)
        return 1;
    else
        return 0;
}
