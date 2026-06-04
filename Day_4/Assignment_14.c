#include <stdio.h>

int main()
{
    int n, i, f1 = 0, f2 = 1, f3;
    printf("enter n");
    scanf("%d", &n);

    if (n == 1)
        printf("%d", f1);

    else if (n == 2)
        printf("%d", f2);

    else
    {
        for (i = 1; i <= n - 2; i++)
        {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
        printf("%d", f3);
    }
}
