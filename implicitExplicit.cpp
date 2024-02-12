#include <iostream>

int main() {
    // Implicit Type Casting
    int integerNumber = 10;
    double doubleNumber = integerNumber; // Implicitly cast int to double

    std::cout << "Implicit Type Casting: int to double\n";
    std::cout << "Integer Number: " << integerNumber << "\n";
    std::cout << "Double Number: " << doubleNumber << "\n\n";

    // Explicit Type Casting
    double anotherDoubleNumber = 15.75;
    int convertedInt = static_cast<int>(anotherDoubleNumber); // Explicitly cast double to int

    std::cout << "Explicit Type Casting: double to int\n";
    std::cout << "Double Number: " << anotherDoubleNumber << "\n";
    std::cout << "Converted Integer: " << convertedInt << "\n";
    system("pause");
    return 0;
}
