#include <iostream>

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main() {
    int binary_digits[6] = {1, 1, 0, 1, 0, 1};
    int number_of_digits = sizeof(binary_digits)/sizeof(binary_digits[0]);

    std::cout << binary_to_int(binary_digits, number_of_digits) << std::endl;
}