#include <iostream>

extern void sum_diagonal(int array[4][4]);

int main() {
    int array[4][4] = { {-1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}
    };

    sum_diagonal(array);
}