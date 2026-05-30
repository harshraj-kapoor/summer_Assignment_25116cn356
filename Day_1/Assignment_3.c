#include <stdio.h>

int main()
{
    int n, facto, i;
    facto = 1;
    printf("enter n ");
    scanf("%d", &n);
    if (n < 0)
        printf("factorial is not defined");

    else if (n == 0 || n == 1)
        printf("factorial is 1");

    else
    {

        for (i = 1; i <= n; i++)
        {

            facto = facto * i;
        }
        printf(" factorial is %d " , facto);
    }
    return 0;
}
