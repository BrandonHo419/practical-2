#include <iostream>


void sum_diagonal(int array[4][4]) {

    int diagonal1 = array[0][0];

    int diagonal2 = array[3][3];

    int sum = diagonal1 + diagonal2;

    std::cout << sum << std::endl;

}