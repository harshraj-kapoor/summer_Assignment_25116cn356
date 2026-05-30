#include <stdio.h>

int main()
{
    int n, i, sum=0, k=1;
    printf("enter the no ");
    scanf("%d", &n);

    while (n>0)
    {
        k=  n%10;
        sum = sum+k;
        n = n/10;
    }
    
    printf("%d", sum);


    return 0;
}
