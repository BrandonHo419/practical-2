#include <iostream>


void sum_diagonal(int array[4][4]) {

    int size = 4;
    int sum = 0;

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(array[i][j] == i) {
                sum = array[i][j];
            }
        }
    }


    std::cout << sum << std::endl;

}