#include <iostream> 

void print_scaled(int array[3][3],int scale) {
    int values[9] = {};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            values[i] = array[i][j] *3;
            std::cout << values[i] << std::endl;
        }
    }
}