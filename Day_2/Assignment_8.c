#include <stdio.h>

int main()
{
    int n, i, rev = 0, k = 1, temp;

    for (i = 100; i <= 900; i++)
    {
        n=i;
        rev=0;
        while (n > 0)
        {
            k = n % 10;
            rev = rev * 10 + k;
            n = n / 10;
        }

        if (i == rev)
            printf("%d\n", i);
    }
    return 0;
}
