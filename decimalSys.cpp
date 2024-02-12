#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::setw(10) << std::left << "Decimal" << std::setw(10) << "Octal" << std::setw(10) << "Hexadecimal" << std::endl;
    std::cout << std::setfill('-') << std::setw(30) << "" << std::setfill(' ') << std::endl;

    for (int i = 1; i <= 10; ++i) {
        std::cout << std::setw(10) << std::dec << i << std::setw(10) << std::oct << i << std::setw(10) << std::hex << i << std::endl;
    }

    return 0;
}
