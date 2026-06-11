#include <stdio.h>

int main()
{
    int n, i, j;

    printf("enter n ");
    scanf("%d", &n);

    char ch = 'A';
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= i; j++)
        {
            printf("%c", ch);
        }
        printf("\n");
        ch++;
    }
}
