#include <stdio.h>

long long factorial(int n)
{
    /* Base cases: 0! and 1! are both 1. */
    if (n == 0 || n == 1)
        return 1;

    /* Recursive case. */
    return n * factorial(n - 1);
}

int main(void)
{
    int n;

    printf("Enter an integer from 0 to 20: ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 20)
    {
        printf("Invalid input. Factorial is supported here for 0 to 20.\n");
        return 1;
    }

    printf("%d! = %lld\n", n, factorial(n));

    return 0;
}
