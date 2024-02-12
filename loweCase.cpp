#include <iostream>

int esMinuscula
(char ch) {
    int ans = 0;
    if (ch >= 'a' && ch <= 'z') {
        ans = 1;
    } 
    return ans;
}

int main() {
    char character;

    printf("Enter a character: ");
    scanf(" %c", &character);

    if (esMinuscula
    (character)) {
        printf("%c es minuscula.\n", character);
    } else {
        printf("%c no es minuscula.\n", character);
    }
    system("pause");
    return 0;
}