#include <iostream>

extern int_fast16_t sum_diagonal(int array[4][4]);

int main() {
    int array[4][4] = { {-1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}
    };

    std::cout << sum_diagonal(array) << std::endl;
}