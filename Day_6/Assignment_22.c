#include <stdio.h>
#include<mathio.h>
int main()
{
    int bin, deci = 0, pow =1, digit;

    printf("Enter a binary number: ");
    scanf("%d", &bin);

    while (bin > 0)
    {
        digit = bin % 10;      
        deci = deci + digit * pow;
        pow = pow * 2;
        bin = bin / 10;
    }

    printf("Decimal = %d", deci);

    return 0;
}
