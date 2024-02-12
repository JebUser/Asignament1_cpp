#include <iostream>

unsigned long long factorial(int n) {
    int ans = 1;
    if (n > 1) {
        for (int i = n; i != 1 ;--i) {
            ans = ans * i;
        }
    }

    return ans;
}

int main() {
    int number;

    printf("Ingrese un numero: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Porfavor que el numero no sea negativo.\n");
        return 1;
    }
    printf("El factorial de %d es %llu.\n", number, factorial(number));
    system("pause");
    return 0;
}
