#include <stdio.h>

int main()
{
    int n, i, product=1, k=1;
    printf("enter the no ");
    scanf("%d", &n);

    while (n>0)
    {
        k=  n%10;
        product = product*k;
        n = n/10;
    }
    
    printf("%d", product);


    return 0;
}
