#include <iostream> 

void print_scaled(int array[3][3], int scale) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int value = array[i][j] * scale;
            std::cout << value;
            if (j < 2) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}