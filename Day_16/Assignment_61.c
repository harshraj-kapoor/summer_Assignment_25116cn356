#include <stdio.h>

int main()
{
    int n,i, s = 0;
    printf("enter the max number(n) : ");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements of array : ");
    for (i = 0; i < n-1; i++)
    {
        scanf("%d", &a[i]);
        s=s+a[i];
    }
    int expected_sum;
    expected_sum= n*(n+1)/2;
    printf("the missing number is : %d", expected_sum-s);
    return 0;
}
