#include <iostream>

int main() {
    char digit_char = '9'; // The character representing a digit
    int digit_int = digit_char - '0'; // Subtract '0' to get the integer value

    std::cout << "The character '" << digit_char << "' converts to the integer: " << digit_int << std::endl;

    return 0;
}