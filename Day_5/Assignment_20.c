#include <stdio.h>

int main() {
    int n, i, l = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++) {
        while(n % i == 0) {
            l = i;
            n = n / i;
        }
    }

    printf("Largest Prime Factor = %d\n", l);

    return 0;
}
