#include <stdio.h>
#include <string.h>

int main()
{
    char str[200], word[50], longest[50], current[50];
    int i, j, len;

    printf("Enter a sentence: ");
    gets(str);

    len = strlen(str);
    j = 0;
    longest[0] = '\0';

    for (i = 0; i <= len; i++)
    {

        if (str[i] == ' ' || str[i] == '\0')
        {

            current[j] = '\0';

            if (strlen(current) > strlen(longest))
            {
                strcpy(longest, current);
            }

            j = 0;
        }
        else
        {
            current[j++] = str[i];
        }
    }

    printf("\nLongest word: %s\n", longest);
    printf("Length: %d\n", strlen(longest));

    return 0;
}
