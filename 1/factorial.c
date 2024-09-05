#include <stdio.h>


int factorial(int n) {
    if((n == 0) || (n == 1)){
        return 1;
    }
    else{
        return n * factorial(n - 1);  // Llamada recursiva
    }
}


int main() {
    int n;

    printf("Ingresa un número entero para calcular su factorial: ");
    scanf("%d", &n);

    if(n < 0){
        printf("El factorial no está definido para números negativos.\n");
    }
    else{
        printf("El factorial de %d es %d.\n", n, factorial(n));
    }

    return 0;
}