#include <stdio.h>

long long fibonacci(int n)
{
    /* The first two Fibonacci terms are F(0) = 0 and F(1) = 1. */
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    /* Each later term is the sum of the two preceding terms. */
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void)
{
    int n;

    printf("Enter the term position (0 to 46): ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 46)
    {
        printf("Invalid input. Enter a position from 0 to 46.\n");
        return 1;
    }

    printf("Fibonacci term F(%d) = %lld\n", n, fibonacci(n));

    return 0;
}
