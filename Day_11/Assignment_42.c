#include <stdio.h>

int Maximum(int a, int b);

int main ()
{
    int a, b, result;
    printf("enter two number : ");
    scanf("%d%d", &a, &b);

    result = Maximum(a, b);  
    printf("max = %d\n", result);

}

int Maximum(int a , int b)
{
    if (a > b)
        return a;
    else
        return b;
}
