#include <stdio.h>

int upperCase(char x)
{
    int ans;
    if (x >= 'A' && x <= 'Z')
    {
        ans = 1;
    }
    else if (x >= 'a' && x <= 'z')
    {
        ans = 0;
    }
    else
    {
        ans = 2;
    }
    return ans;
}

int main()
{
    char x;
    int a;
    printf("Ingrese una letra: ");
    scanf("%c", &x);
    a = upperCase(x);
    if (a == 1)
    {
        printf("La letra ingresada es mayúscula.");
    }
    else if (a == 0)
    {
        printf("Lo letra ingresada es minúscula.");
    }
    else 
    {
        printf("¡Eso ni siquiera es una letra!");
    }
    return 0;
}