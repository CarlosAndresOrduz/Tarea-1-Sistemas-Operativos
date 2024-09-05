#include <stdio.h>


void oddOrEven(int n){
    if (n % 2 == 0){
        printf("%d es un número par.\n", n);
    } 
    else{
        printf("%d es un número impar.\n", n);
    }

}


int main() {
    int n;

    // Solicitar al usuario un número
    printf("Ingresa un número entero: ");
    scanf("%d", &n);

    oddOrEven(n);

    return 0;
}
