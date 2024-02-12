#include <iostream>

void esPar(int num) {
    if (num % 2 == 0) {
        printf("%d es par.\n", num);
    } else {
        printf("%d es impar.\n", num);
    }
}

int main() {
    int number;
    printf("Ingresa un numero: ");
    scanf("%d", &number);

    esPar(number);
    system("pause");

    return 0;
}
