#include <iostream>

int findGreater(int num1, int num2, int num3) {
    int ans = num3;
    if (num1 >= num2 && num1 >= num3) {
        ans = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        ans = num2;
    }
    return ans;
}

int main() {
    int num1, num2, num3;

    printf("Ingresa 3 numeros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int result = findGreater(num1, num2, num3);

    printf("El mayor de los 3 numeros es: %d\n", result);
    system("pause");
    return 0;
}
