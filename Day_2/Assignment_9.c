#include <stdio.h>

int main()
{
    int n1, n2, i, k, j;
    printf("enter n1 and n2\n");
    scanf("%d%d", &n1, &n2);

    for (i = n1; i <= n2; i++)
    {
        k = 0;
        if (i < 2)
            continue;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                k = 1;
                break;
            }
        }
        if (k == 0)
            printf("%d\n", i);
    }
    return 0;
}
