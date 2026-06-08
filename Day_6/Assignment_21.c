#include <stdio.h>

int main()
{
    int n, k, i = 0;
    int bin[32];

    printf("Enter n");
    scanf("%d",&n);

    while (n > 0)
    {
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", bin[j]);
    }

    return 0;
}
