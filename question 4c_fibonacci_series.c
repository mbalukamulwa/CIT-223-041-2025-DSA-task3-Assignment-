#include <stdio.h>

long long fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

void generateFibonacci(int totalTerms, int position)
{
    /* Stop when all requested positions have been printed. */
    if (position == totalTerms)
        return;

    printf("%lld ", fibonacci(position));

    /* Recursively print the next term. */
    generateFibonacci(totalTerms, position + 1);
}

int main(void)
{
    int n;

    printf("How many Fibonacci terms should be generated? ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 47)
    {
        printf("Invalid input. Enter a number from 1 to 47.\n");
        return 1;
    }

    printf("First %d Fibonacci terms:\n", n);
    generateFibonacci(n, 0);
    printf("\n");

    return 0;
}
