#include <stdio.h>

int turnToOctal(int x)
{
    int ans, less;
    if (x < 8)
    {
        ans = x;
    }
    else
    {
        less = x - 8;
        ans = 10 + less;
    }
    return ans;
}

char turnToHex(int x)
{
    int ans, less;
    if (x < 10)
    {
        ans = x + '0';
    }
    else
    {
        ans = 'A';
    }
    return ans;
}

void turnToBin(int x)
{
    int divent, mod;
    char bin[4];
    divent = x;
    for (int i = 0; i < 4; i++)
    {
        mod = divent % 2;
        divent = divent/2;
        bin[3-i] = mod + '0';
    }
    printf("%d en binario es: ", x);
    for (int i = 0; i < 4; i++)
    {
        printf("%c", bin[i]);
    }
}

int main()
{
    int x, oct, hex;
    printf("Ingrese un número entre el 1 y el 10: ");
    scanf("%d", &x);
    if (x > 10)
    {
        printf("¡El número debe ser menor de 10!\n");
    }
    oct = turnToOctal(x);
    printf("%d en octal es: %d\n", x, oct);

    hex = turnToHex(x);
    printf("%d en hexadecimal es: %c\n", x, hex);

    turnToBin(x);

    /*printf("Ingrese el segundo número: ");
    scanf("%d", &y);
    printf("Ingrese el tercer número: ");
    scanf("%d", &z);
    ans = greaterOfThree(x, y, z);
    printf("El mayor de los tres números es %d", ans);*/
    return 0;
}