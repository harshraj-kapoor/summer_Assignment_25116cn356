#include <stdio.h>

int main()
{
    int n, i, f1 = 0, f2 = 1, f3;
    printf("enter upto which terms fibonacci series is to be printed ");
    scanf("%d", &n);
    printf("%d,%d,", f1, f2);

    for (i = 1; i <= n - 2; i++)
    {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
        printf("%d,", f3);
    }
    return 0;
}
