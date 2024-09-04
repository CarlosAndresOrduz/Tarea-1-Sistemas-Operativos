#include <stdio.h>
int greaterOfThree(int x, int y, int z)
{
    int big;
    big = x;
    if (y > big)
    {
        big = y;
    }
    if (z > big)
    {
        big = z;
    }
    return big;
}

int main()
{
    int x, y, z, ans;
    printf("Ingrese el primer número: ");
    scanf("%d", &x);
    printf("Ingrese el segundo número: ");
    scanf("%d", &y);
    printf("Ingrese el tercer número: ");
    scanf("%d", &z);
    ans = greaterOfThree(x, y, z);
    printf("El mayor de los tres números es %d", ans);
    return 0;
}