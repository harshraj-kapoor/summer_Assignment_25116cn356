#include <stdio.h>

void fibonacci(int n);

int main()
{
    int n;
    printf("enter n");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}

void fibonacci(int n)
{
    int a = 0, b = 1, c, i;

    printf("%d %d ", a, b);

    for (i = 3; i <= n; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}
