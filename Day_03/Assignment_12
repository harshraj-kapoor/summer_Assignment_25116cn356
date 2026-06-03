#include <stdio.h>

int main() {
    int a, b, c, lcm;

    printf("Enter number");
    scanf("%d%d%d", &a,&b,&c);

    lcm = (a > b) ? a : b;
    lcm = (lcm > c) ? lcm : c;

    while (1) {
        if (lcm % a == 0 && lcm % b == 0 && lcm % c == 0) {
            printf("LCM = %d",lcm);
            break;
        }
        lcm++;
    }

    return 0;
}
