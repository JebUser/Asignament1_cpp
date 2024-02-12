#include <iostream>

int esBisiesto(int year) {
    int ans = 0;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    } 
    
    return ans;
}

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (esBisiesto(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    system("pause");
    return 0;
}
