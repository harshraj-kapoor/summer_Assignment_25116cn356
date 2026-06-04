#include <stdio.h>

int main()
{
    int n, temp, sum=0, k;
    printf("enter the no ");
    scanf("%d", &n);
    temp = n;

    while (n > 0)
    {
        k = n % 10;
        sum = sum + k*k*k;
        n = n / 10;
    }

    if (temp == sum)
        printf("no is armstrong");

    else
        printf("no is not armstrong");

    return 0;
}
