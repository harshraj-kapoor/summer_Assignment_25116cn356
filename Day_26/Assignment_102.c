#include <stdio.h>

int main()
{
    int age, citizen;
    printf("enter your age : ");
    scanf("%d", &age);
    printf("Are you a citizen of India? (1 for Yes and 2 for No) : ");
    scanf("%d", &citizen);
    if (age >= 18 && citizen == 1)
    {
        printf("You are Eligible");
    }
    else
    {
        printf("You are not Eligible");
    }

    return 0;
}
