#include <stdio.h>

int main()
{
    int a[100], n, i, even = 0, odd = 0;
    printf("enter the no of elements in an array : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (i = 0; i < n; i++)
    {
        if (a[i]%2 == 0)
            even += 1;
        if (a[i]%2 != 0)
            odd += 1;
    }
    printf("No of even element is %d\nNo of odd element is %d", even, odd);

    return 0;
}
