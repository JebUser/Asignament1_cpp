#include <iostream>

int potencia(int base, int exponent) {
    int ans = 1;
    if (exponent > 0) {
        ans = base * potencia(base, exponent - 1);
    }
    return ans;  
}

int main() {
    int base;
    int exponent;

    printf("Ingresa numero: ");
    scanf("%d", &base);

    printf("Ingrese la potencia: ");
    scanf("%d", &exponent);

    printf("%d elevado a la %d es: %d\n", base, exponent, potencia(base, exponent));
    system("pause");
    return 0;
    
}
