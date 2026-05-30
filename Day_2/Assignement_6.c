#include <stdio.h>

int main()
{
    int n, i, rev=0, k=1;
    printf("enter the no ");
    scanf("%d", &n);

    while (n>0)
    {
        k=  n%10;
        rev = rev*10 + k;
        n = n/10;
    }
    
    printf("%d", rev);


    return 0;
}
