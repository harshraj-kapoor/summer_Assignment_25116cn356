#include <stdio.h>

int prime(int a);

int main ()
{
    int a, result;
    printf("enter number : ");
    scanf("%d", &a);

    result = prime(a);  
    printf("%d\n", result);

}

int prime(int a)
{
    int i;

    if (a <= 1) return 0;  

    for (i = 2; i <= a/2; i++)
    {
        if (a%i == 0)
            return 0;
    }
    return 1;
}
