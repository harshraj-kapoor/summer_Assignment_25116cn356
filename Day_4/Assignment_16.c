#include <stdio.h>

int main()
{
    int i, n1, n2, temp, sum, k, num;
    printf("enter the range ");
    scanf("%d%d", &n1, &n2);

    for (i = n1; i <= n2; i++)
    {
        temp = i;
        sum=0;
        num = i;

        while (temp > 0)
        {
            k = temp % 10;
            sum = sum + k * k * k;
            temp = temp / 10;
        }

        if (i == sum)
            printf("%d ", num);
    }

    return 0;
}

// this program is only for 3 digit numbers
