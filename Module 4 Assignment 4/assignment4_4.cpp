#include <iostream>

int main() {
    long long binary;
    int dec = 0, i = 1, rem;

    std::cout << "enter binary number" << std::endl;
    std::cin >> binary;

    while (binary != 0) {
        rem = binary % 10;
        dec = dec + rem * i;
        i = i * 2;
        binary = binary / 10;
    }
    std::cout << "equivalent hexadecimal value: " << dec << std::endl;
    return 0;
}