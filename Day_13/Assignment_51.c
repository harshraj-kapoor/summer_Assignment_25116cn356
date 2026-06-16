#include <stdio.h>

int main()
{
    int a[100], n, i, min, max;
    printf("enter the no of elements in an array : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    min = max = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
        if (a[i] > max)
            max = a[i];
    }
    printf("Smallest element is %d\nLargest element is %d", min, max);

    return 0;
}
