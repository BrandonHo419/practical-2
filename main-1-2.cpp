#include <iostream>

extern int is_identity(int array[10][10]);

int main() {
    int array[10][10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << is_identity(array) << std::endl;
    
}