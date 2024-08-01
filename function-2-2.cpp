#include <iostream>
#include <cmath>

int binary_to_int(int binary_digits[], int number_of_digits) {
    int integer_value = 0;
    
    for (int i = 0; i < number_of_digits; i++) {
        integer_value += binary_digits[number_of_digits - 1 - i] * pow(2, i);
    }
    
    return integer_value;
}
