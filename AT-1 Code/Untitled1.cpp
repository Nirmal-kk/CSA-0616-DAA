#include <stdio.h>
#include <math.h>

// Simulates T(n) = 2T(n/2) + n log n
double backupCost(int n)
{
    if (n <= 1)
        return 1;

    return 2 * backupCost(n / 2) + n * log2(n);
}

int main()
{
    int n;

    printf("Enter data size (power of 2): ");
    scanf("%d", &n);

    printf("Estimated Cost T(%d) = %.2lf\n", n, backupCost(n));

    printf("\nRecurrence:\n");
    printf("T(n) = 2T(n/2) + n log n\n");

    printf("\nMaster Theorem Analysis:\n");
    printf("a = 2\n");
    printf("b = 2\n");
    printf("f(n) = n log n\n");

    printf("\nSince n^(log_b(a)) = n^(log2(2)) = n\n");
    printf("f(n) = Theta(n log n) = Theta(n^(log_b(a)) log n)\n");

    printf("\nCase 2 of the Master Theorem:\n");
    printf("T(n) = Theta(n log^2 n)\n");

    return 0;
}