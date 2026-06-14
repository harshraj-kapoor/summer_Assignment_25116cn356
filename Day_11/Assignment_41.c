#include <stdio.h>

int sum(int a, int b);

int main ()
{
    int a, b, result;
    printf("enter two number : ");
    scanf("%d%d", &a, &b);

    result = sum(a, b);  
    printf("Sum = %d\n", result);

}

int sum(int a , int b)
{
    return a+b;
}
