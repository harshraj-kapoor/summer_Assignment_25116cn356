#include <stdio.h>

int main()
{
    int a[100], n, i, s = 0, avg = 0;
    printf("enter the no of elements in an array : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
            s = s + a[i];
    }
    avg = s/n;
    printf("the sum of elements of an array is %d\n", s);
    printf("the average of elements of an array is %d\n", avg);
    return 0;
}
