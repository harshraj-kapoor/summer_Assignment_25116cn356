#include <stdio.h>

int main()
{

    int n, i, k;
    char   ch;

    printf("enter n : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (k = n - i; k >= 1; k--)
        {
            printf(" ");
        }

        for (ch = 'A'; ch <= 'A' + i - 1; ch++)
        {

            printf("%c", ch);
        }
        for (ch = 'A' + i - 2; ch >= 'A'; ch--)
        {

            printf("%c", ch);
        }

        printf("\n");
    }

    return 0;
}
