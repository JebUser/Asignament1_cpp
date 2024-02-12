#include <iostream>

void imprimirFibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series up to %d terms: \n", n);

    for (int i = 0; i < n; ++i) {
        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
}

int main() {
    int terms;

    printf("Ingresa la cantidad en la serie: ");
    scanf("%d", &terms);

    if (terms < 0) {
        printf("Ingrese numeros positivos enternos.\n");
        return 1;
    }

    imprimirFibonacci(terms);
    system("pause");

    return 0;
}
