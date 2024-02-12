#include <iostream>

int esMayuscula(char ch) {
    int ans = 0;
    if (ch >= 'A' && ch <= 'Z') {
        ans = 1;
    } 
    return ans;
}

int main() {
    char character;

    printf("Enter a character: ");
    scanf(" %c", &character);

    if (esMayuscula(character)) {
        printf("%c es mayuscula.\n", character);
    } else {
        printf("%c no es mayuscula.\n", character);
    }
    system("pause");
    return 0;
}
