#include <stdio.h>

int main() {
    int intval = 10;
    float floval = 5.5;
    float ans;

    ans = intval + floval;
    printf("Implicit Type Casting:\n");
    printf("intval (int) + floval (float) = %.2f\n", ans);

    double douval = 9.99;
    int intval2;

    intval2 = (int)douval;
    printf("\nExplicit Type Casting:\n");
    printf("douval (double) cast to int = %d\n", intval2);

    return 0;
}