#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], compressed[200];
    int i, count, len, k;

    printf("Enter string: ");
    gets(str);

    len = strlen(str);
    k = 0;

    i = 0;
    while (i < len)
    {
        count = 1;

        while (i + count < len && str[i] == str[i + count])
        {
            count++;
        }

        compressed[k++] = str[i];

        if (count > 1)
        {

            if (count >= 10)
            {
                compressed[k++] = '0' + (count / 10);
                compressed[k++] = '0' + (count % 10);
            }
            else
            {
                compressed[k++] = '0' + count;
            }
        }

        i += count;
    }

    compressed[k] = '\0';

    if (strlen(compressed) >= strlen(str))
    {
        printf("Compressed: %s\n", str);
        printf("(Compression not beneficial, keeping original)\n");
    }
    else
    {
        printf("Original:   %s\n", str);
        printf("Compressed: %s\n", compressed);
    }

    return 0;
}
