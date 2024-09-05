#include <stdio.h>


void fibonacci(int n) {
    int a = 0, b = 1, temp;

    printf("Secuencia de Fibonacci:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        temp = a + b;
        a = b;
        b = temp;
    }
    printf("\n");
}


int main() {
    int n;
    printf("Ingresa el número de términos de la secuencia de Fibonacci: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}