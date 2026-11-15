#include <stdio.h>

long long sumNaturalNumbers(int n)
{
    /* Base case: the sum of zero natural numbers is zero. */
    if (n == 0)
        return 0;

    /* Recursive case. */
    return n + sumNaturalNumbers(n - 1);
}

int main(void)
{
    int n;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1 || n < 0)
    {
        printf("Invalid input. Enter a non-negative integer.\n");
        return 1;
    }

    printf("Sum of the first %d natural numbers = %lld\n",
           n, sumNaturalNumbers(n));

    return 0;
}
