#include <iostream>

int esPrimo(int num) {
    int ans = 1;
    if (num > 1){
        for (int i = 2; i < num; ++i) {
            if (num % i == 0) {
                ans = 0;
            }
        }
    } else {
        ans = 0;
    }
    return ans;
}

int main() {
    int number;

    printf("Ingrese un numero: ");
    scanf("%d", &number);

    if (esPrimo(number)) {
        printf("%d es un numero primo.\n", number);
    } else {
        printf("%d no es un numero primo.\n", number);
    }
    system("pause");
    return 0;
}
