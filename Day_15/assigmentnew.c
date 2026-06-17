#include <stdio.h>

int palindrome(int n);

int main()
{
    int n, result;
    printf("enter number ");
    scanf("%d", &n);

    result = palindrome(n);

    if (result == 1)
        printf("%d is palindrome\n", n);
    else
        printf("%d is not palindrome\n", n);

    return 0;
}

int palindrome(int n)
{
    int original = n;
    int rev = 0;

    while (n > 0)
    {
        int d = n % 10;
        rev = rev * 10 + d;
        n = n / 10;
    }

    if (rev == original)
        return 1;
    else
        return 0;
}
