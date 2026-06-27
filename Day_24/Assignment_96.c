#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], result[100];
    int seen[256] = {0};
    int i, k;

    printf("Enter string: ");
    gets(str);

    k = 0;

    for (i = 0; i < strlen(str); i++)
    {

        if (seen[(int)str[i]] == 0)
        {
            result[k++] = str[i];
            seen[(int)str[i]] = 1;
        }
    }

    result[k] = '\0';

    printf("\nOriginal : %s\n", str);
    printf("Result   : %s\n", result);

    return 0;
}
